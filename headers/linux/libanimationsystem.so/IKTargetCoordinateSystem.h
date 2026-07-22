#pragma once

enum IKTargetCoordinateSystem : uint32_t  // sizeof 0x4
{
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};
