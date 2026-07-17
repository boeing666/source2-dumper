#pragma once

#include <filesystem>

namespace schema {

int DumpAll(const std::filesystem::path& binDir,
            const std::filesystem::path& moduleDir,
            const std::filesystem::path& outDir);

}
