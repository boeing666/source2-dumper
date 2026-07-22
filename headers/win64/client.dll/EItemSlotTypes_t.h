#pragma once

enum EItemSlotTypes_t : uint8_t  // sizeof 0x1
{
    EItemSlotType_Invalid = -1,
    EItemSlotType_WeaponMod = 0,
    EItemSlotType_Armor = 1,
    EItemSlotType_Tech = 2,
    EItemSlotType_Universal = 3,
    EItemSlotType_UniversalLocked = 4,
    EItemSlotType_All = 5,
    EItemSlotType_Favorites = 6,
    EMaxItemSlotTypes = 7,
};
