#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bIsBuffedAttack; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32 heal_pct; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AB0, size 0x4, align 4
    float32 heal_radius; // offset 0x1AB4, size 0x4, align 4
    int32 heal_from_creeps; // offset 0x1AB8, size 0x4, align 4
    int32 allied_healing_pct; // offset 0x1ABC, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
    CUtlVector< CHandle< CBaseEntity > > hTargets; // offset 0x1AC8, size 0x18, align 8
    float32 m_flTotalToHeal; // offset 0x1AE0, size 0x4, align 4
    bool m_bHasProccedCooldownReduction; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
    float32 cooldown_reduction; // offset 0x1AE8, size 0x4, align 4
    float32 movespeed_bonus_duration; // offset 0x1AEC, size 0x4, align 4
    float32 movespeed_bonus_from_creeps; // offset 0x1AF0, size 0x4, align 4
    bool m_bShouldRecreate; // offset 0x1AF4, size 0x1, align 1
    char _pad_1AF5[0x3]; // offset 0x1AF5
};
