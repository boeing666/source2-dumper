#include "core/vpk.hpp"

#include <array>
#include <cstdint>
#include <cstring>
#include <format>
#include <fstream>
#include <iterator>
#include <span>
#include <vector>

namespace vpk {

namespace {

namespace fs = std::filesystem;

constexpr std::uint32_t kSignature = 0x55AA1234;
constexpr std::uint16_t kInDirFile = 0x7FFF; // archive index: data follows the tree inside the _dir.vpk
constexpr std::uint16_t kTerminator = 0xFFFF;

struct EntryInfo {
	std::uint16_t preloadBytes;
	std::uint16_t archive;
	std::uint32_t offset;
	std::uint32_t length;
};

std::vector<char> ReadAll(const fs::path& path) {
	std::ifstream in(path, std::ios::binary);
	return { std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>() };
}

template <typename T>
bool Take(std::span<const char> data, std::size_t& pos, T& out) {
	if (pos + sizeof(T) > data.size()) {
		return false;
	}
	std::memcpy(&out, data.data() + pos, sizeof(T));
	pos += sizeof(T);
	return true;
}

std::string_view TakeString(std::span<const char> data, std::size_t& pos) {
	const auto* begin = data.data() + pos;
	const auto len = ::strnlen(begin, data.size() - pos);
	pos += len + 1;
	return { begin, len };
}

// "resource/game.gameevents" -> { "resource", "game", "gameevents" }; files at the root use a single space as path.
std::array<std::string_view, 3> Split(std::string_view entry) {
	const auto slash = entry.rfind('/');
	const auto dir = slash == std::string_view::npos ? std::string_view(" ") : entry.substr(0, slash);
	const auto file = slash == std::string_view::npos ? entry : entry.substr(slash + 1);
	const auto dot = file.rfind('.');
	return { dir, file.substr(0, dot), dot == std::string_view::npos ? std::string_view(" ") : file.substr(dot + 1) };
}

}

std::optional<std::string> ReadEntry(const fs::path& dirVpk, std::string_view entry) {
	const std::vector<char> raw = ReadAll(dirVpk);
	const std::span<const char> data(raw);

	std::size_t pos = 0;
	std::uint32_t signature = 0, version = 0, treeSize = 0;
	if (!Take(data, pos, signature) || signature != kSignature || !Take(data, pos, version) || !Take(data, pos, treeSize)) {
		return std::nullopt;
	}
	const std::size_t headerSize = version == 1 ? 12 : 28;
	const std::size_t treeEnd = headerSize + treeSize;
	pos = headerSize;

	const auto [wantDir, wantName, wantExt] = Split(entry);
	// tree: extension { directory { file { info } } }, each level ends with an empty string
	while (pos < treeEnd) {
		const auto ext = TakeString(data, pos);
		if (ext.empty()) {
			break;
		}
		while (pos < treeEnd) {
			const auto dir = TakeString(data, pos);
			if (dir.empty()) {
				break;
			}
			while (pos < treeEnd) {
				const auto name = TakeString(data, pos);
				if (name.empty()) {
					break;
				}
				std::uint32_t crc = 0;
				EntryInfo info{};
				std::uint16_t terminator = 0;
				if (!Take(data, pos, crc) || !Take(data, pos, info.preloadBytes) || !Take(data, pos, info.archive) ||
				    !Take(data, pos, info.offset) || !Take(data, pos, info.length) || !Take(data, pos, terminator) ||
				    terminator != kTerminator) {
					return std::nullopt;
				}
				const std::size_t preloadAt = pos;
				pos += info.preloadBytes;
				if (ext != wantExt || dir != wantDir || name != wantName) {
					continue;
				}

				std::string out(data.data() + preloadAt, info.preloadBytes);
				if (info.length == 0) {
					return out;
				}
				std::vector<char> body(info.length);
				if (info.archive == kInDirFile) {
					if (treeEnd + info.offset + info.length > data.size()) {
						return std::nullopt;
					}
					std::memcpy(body.data(), data.data() + treeEnd + info.offset, info.length);
				} else {
					// pak01_dir.vpk -> pak01_005.vpk
					const std::string stem = dirVpk.stem().string();
					const fs::path archive = dirVpk.parent_path() / std::format("{}_{:03}.vpk", stem.substr(0, stem.size() - 4), info.archive);
					std::ifstream in(archive, std::ios::binary);
					if (!in.seekg(info.offset) || !in.read(body.data(), info.length)) {
						return std::nullopt;
					}
				}
				out.append(body.data(), body.size());
				return out;
			}
		}
	}
	return std::nullopt;
}

}
