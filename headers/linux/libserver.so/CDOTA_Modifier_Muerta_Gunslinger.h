#pragma once

class CDOTA_Modifier_Muerta_Gunslinger : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 double_shot_chance; // offset 0x1A78, size 0x4, align 4
    float32 target_search_bonus_range; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A80, size 0x4, align 4
    float32 dead_shot_cooldown_reduction_on_proc; // offset 0x1A84, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1A88, size 0x4, align 4
    bool m_bApplyBonusDamage; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
};
