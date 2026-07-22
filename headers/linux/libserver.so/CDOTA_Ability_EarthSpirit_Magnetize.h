#pragma once

class CDOTA_Ability_EarthSpirit_Magnetize : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 magnetize_self; // offset 0x85C, size 0x4, align 4
    float32 cast_radius; // offset 0x860, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x864, size 0x4, align 4
    float32 damage_duration; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x4]; // offset 0x86C
};
