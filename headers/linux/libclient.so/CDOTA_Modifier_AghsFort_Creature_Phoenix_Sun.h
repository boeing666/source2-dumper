#pragma once

class CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 aura_radius; // offset 0x1A78, size 0x4, align 4
    float32 stun_duration; // offset 0x1A7C, size 0x4, align 4
    int32 max_hero_attacks; // offset 0x1A80, size 0x4, align 4
    int32 max_hero_attacks_scepter; // offset 0x1A84, size 0x4, align 4
    int32 max_hero_attacks_required; // offset 0x1A88, size 0x4, align 4
    float32 caster_life_pct; // offset 0x1A8C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondaryTarget; // offset 0x1A90, size 0x4, align 4
    int32 m_iAttackCount; // offset 0x1A94, size 0x4, align 4
};
