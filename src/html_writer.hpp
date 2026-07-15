#pragma once

#include <filesystem>
#include <string>
#include <unordered_set>
#include <vector>

#include "schema_model.hpp"

namespace schema {

// Writes <platform>.html (code view), platforms.json and index.html into outDir.
void WritePlatformPage(const std::filesystem::path& outDir,
                       const std::vector<Module>& modules,
                       const std::unordered_set<std::string>& known,
                       const std::string& gameVersion,
                       const std::string& serverVersion);

} // namespace schema
