#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bIsBuffedAttack; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 heal_pct; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A60, size 0x4, align 4
    float32 heal_radius; // offset 0x1A64, size 0x4, align 4
    int32 heal_from_creeps; // offset 0x1A68, size 0x4, align 4
    int32 allied_healing_pct; // offset 0x1A6C, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
    CUtlVector< CHandle< C_BaseEntity > > hTargets; // offset 0x1A78, size 0x18, align 8
    float32 m_flTotalToHeal; // offset 0x1A90, size 0x4, align 4
    bool m_bHasProccedCooldownReduction; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    float32 cooldown_reduction; // offset 0x1A98, size 0x4, align 4
    float32 movespeed_bonus_duration; // offset 0x1A9C, size 0x4, align 4
    float32 movespeed_bonus_from_creeps; // offset 0x1AA0, size 0x4, align 4
    bool m_bShouldRecreate; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
};
