#pragma once

class C_DOTA_Ability_Frogmen_TendrilsOfTheDeep : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x6A8, size 0x18, align 8
    float32 duration; // offset 0x6C0, size 0x4, align 4
    int32 speed; // offset 0x6C4, size 0x4, align 4
    float32 damage; // offset 0x6C8, size 0x4, align 4
    float32 range; // offset 0x6CC, size 0x4, align 4
    float32 yaw_offset; // offset 0x6D0, size 0x4, align 4
    int32 projectile_width; // offset 0x6D4, size 0x4, align 4
    float32 neutral_shared_cooldown; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x14]; // offset 0x6DC
};
