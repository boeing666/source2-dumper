#pragma once

#include <filesystem>

namespace schema {

// Loads every shared library in binDir + moduleDir, installs their schema
// bindings, then writes one <ClassName>.h per registered class (across all
// module scopes) into outDir. Returns 0 on success.
//
//   binDir    - game/bin/<platform>        (schemasystem + deps)
//   moduleDir - game/<game>/bin/<platform> (client, server, ...)
//   outDir    - directory for the generated headers
int DumpAll(const std::filesystem::path& binDir,
            const std::filesystem::path& moduleDir,
            const std::filesystem::path& outDir);

} // namespace schema
