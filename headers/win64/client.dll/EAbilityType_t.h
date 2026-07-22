#pragma once

enum EAbilityType_t : uint8_t  // sizeof 0x1
{
    EAbilityType_Invalid = -1,
    EAbilityType_Weapon = 0,
    EAbilityType_Signature = 1,
    EAbilityType_Ultimate = 2,
    EAbilityType_Item = 3,
    EAbilityType_Innate = 4,
    EAbilityType_Cosmetic = 5,
    EAbilityType_Melee = 6,
};
