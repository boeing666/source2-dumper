#pragma once

enum EDOTACrateDropHazardType : uint32_t  // sizeof 0x4
{
    k_eCrateDropHazardType_Invalid = 0,
    k_eCrateDropHazardType_Bomb = 1,
    k_eCrateDropHazardType_Nuke = 2,
    k_eCrateDropHazardType_Goop = 4,
};
