#pragma once

#include <filesystem>
#include <vector>

#include "gameevents/event_model.hpp"

namespace schema {

std::vector<GameEventInfo> CollectGameEvents(const std::filesystem::path& gameRoot);

}
