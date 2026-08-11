#pragma once

class CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 aura_radius; // offset 0x1A78, size 0x4, align 4
    float32 stun_duration; // offset 0x1A7C, size 0x4, align 4
    int32 max_hero_attacks; // offset 0x1A80, size 0x4, align 4
    int32 max_hero_attacks_scepter; // offset 0x1A84, size 0x4, align 4
    int32 max_hero_attacks_required; // offset 0x1A88, size 0x4, align 4
    float32 caster_life_pct; // offset 0x1A8C, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1A90, size 0x4, align 4
    int32 m_iAttackCount; // offset 0x1A94, size 0x4, align 4
    int32 creep_attacks_count; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
