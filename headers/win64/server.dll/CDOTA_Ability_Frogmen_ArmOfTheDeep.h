#pragma once

class CDOTA_Ability_Frogmen_ArmOfTheDeep : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x580, size 0x18, align 8
    float32 duration; // offset 0x598, size 0x4, align 4
    int32 speed; // offset 0x59C, size 0x4, align 4
    float32 damage; // offset 0x5A0, size 0x4, align 4
    float32 range; // offset 0x5A4, size 0x4, align 4
    int32 projectile_width; // offset 0x5A8, size 0x4, align 4
    float32 neutral_shared_cooldown; // offset 0x5AC, size 0x4, align 4
    char _pad_05B0[0x18]; // offset 0x5B0
};
