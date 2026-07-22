#pragma once

enum WaterLevel_t : uint8_t  // sizeof 0x1
{
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Waist = 2,
    WL_Chest = 3,
    WL_FullyUnderwater = 4,
    WL_Count = 5,
};
