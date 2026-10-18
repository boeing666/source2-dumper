#pragma once

#include <filesystem>
#include <optional>
#include <string>
#include <string_view>

namespace vpk {

// Reads one entry (e.g. "resource/game.gameevents") out of a VPK v1/v2 directory file and its
// pak01_NNN.vpk archives. The archives may be sparse: only the chunks holding the entry need data.
[[nodiscard]] std::optional<std::string> ReadEntry(const std::filesystem::path& dirVpk, std::string_view entry);

}
