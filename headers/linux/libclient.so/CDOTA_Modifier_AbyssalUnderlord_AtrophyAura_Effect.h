#pragma once

class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage_reduction_pct; // offset 0x1A58, size 0x4, align 4
    float32 bonus_damage_duration; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_damage_from_creep; // offset 0x1A60, size 0x4, align 4
    float32 bonus_damage_from_hero; // offset 0x1A64, size 0x4, align 4
    bool m_bWasHidden; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
