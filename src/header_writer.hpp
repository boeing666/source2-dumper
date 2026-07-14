#pragma once

#include <filesystem>
#include <vector>

#include "schema_model.hpp"

namespace schema {

// Writes one <ClassName>.h per class/enum into root/<scope>/.
void WriteHeaders(const std::vector<Module>& modules, const std::filesystem::path& root);

} // namespace schema
