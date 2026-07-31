#pragma once

class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage_reduction_pct; // offset 0x1A78, size 0x4, align 4
    float32 bonus_damage_duration; // offset 0x1A7C, size 0x4, align 4
    float32 bonus_damage_from_creep; // offset 0x1A80, size 0x4, align 4
    float32 bonus_damage_from_hero; // offset 0x1A84, size 0x4, align 4
    bool m_bWasHidden; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
