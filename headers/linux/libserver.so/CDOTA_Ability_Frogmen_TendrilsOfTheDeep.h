#pragma once

class CDOTA_Ability_Frogmen_TendrilsOfTheDeep : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    float32 duration; // offset 0x878, size 0x4, align 4
    int32 speed; // offset 0x87C, size 0x4, align 4
    float32 damage; // offset 0x880, size 0x4, align 4
    float32 range; // offset 0x884, size 0x4, align 4
    float32 yaw_offset; // offset 0x888, size 0x4, align 4
    int32 projectile_width; // offset 0x88C, size 0x4, align 4
    float32 neutral_shared_cooldown; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x14]; // offset 0x894
};
