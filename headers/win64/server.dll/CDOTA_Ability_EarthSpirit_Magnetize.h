#pragma once

class CDOTA_Ability_EarthSpirit_Magnetize : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 magnetize_self; // offset 0x580, size 0x4, align 4
    float32 cast_radius; // offset 0x584, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x588, size 0x4, align 4
    float32 damage_duration; // offset 0x58C, size 0x4, align 4
};
