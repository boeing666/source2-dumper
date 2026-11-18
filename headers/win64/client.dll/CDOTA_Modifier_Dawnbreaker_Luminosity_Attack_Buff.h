#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bIsBuffedAttack; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    int32 heal_pct; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B00, size 0x4, align 4
    float32 heal_radius; // offset 0x1B04, size 0x4, align 4
    int32 heal_from_creeps; // offset 0x1B08, size 0x4, align 4
    int32 allied_healing_pct; // offset 0x1B0C, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
    CUtlVector< CHandle< C_BaseEntity > > hTargets; // offset 0x1B18, size 0x18, align 8
    float32 m_flTotalToHeal; // offset 0x1B30, size 0x4, align 4
    bool m_bHasProccedCooldownReduction; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
    float32 cooldown_reduction; // offset 0x1B38, size 0x4, align 4
    float32 movespeed_bonus_duration; // offset 0x1B3C, size 0x4, align 4
    float32 movespeed_bonus_from_creeps; // offset 0x1B40, size 0x4, align 4
    bool m_bShouldRecreate; // offset 0x1B44, size 0x1, align 1
    char _pad_1B45[0x3]; // offset 0x1B45
};
