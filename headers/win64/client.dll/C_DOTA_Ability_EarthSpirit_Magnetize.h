#pragma once

class C_DOTA_Ability_EarthSpirit_Magnetize : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 magnetize_self; // offset 0x6A8, size 0x4, align 4
    float32 cast_radius; // offset 0x6AC, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x6B0, size 0x4, align 4
    float32 damage_duration; // offset 0x6B4, size 0x4, align 4
};
