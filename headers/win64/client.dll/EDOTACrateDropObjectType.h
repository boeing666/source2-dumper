#pragma once

enum EDOTACrateDropObjectType : uint32_t  // sizeof 0x4
{
    k_eCrateDropType_Invalid = 0,
    k_eCrateDropType_Object = 1,
    k_eCrateDropType_Droppable = 3,
    k_eCrateDropType_Trigger = 5,
    k_eCrateDropType_Hazard = 11,
    k_eCrateDropType_Platform = 17,
    k_eCrateDropType_TrackLight = 33,
    k_eCrateDropType_Powerup = 67,
};
