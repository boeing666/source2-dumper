#pragma once

class CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_hero_damage; // offset 0x1A58, size 0x4, align 4
    int32 creep_damage_penalty; // offset 0x1A5C, size 0x4, align 4
    float32 radius; // offset 0x1A60, size 0x4, align 4
    float32 attack_interval; // offset 0x1A64, size 0x4, align 4
};
