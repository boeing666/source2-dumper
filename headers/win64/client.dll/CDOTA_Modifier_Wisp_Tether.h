#pragma once

class CDOTA_Modifier_Wisp_Tether : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bInManaGained; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A5C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > hStunnedEntities; // offset 0x1A60, size 0x18, align 8
    float32 stun_duration; // offset 0x1A78, size 0x4, align 4
    int32 movespeed; // offset 0x1A7C, size 0x4, align 4
    int32 self_bonus; // offset 0x1A80, size 0x4, align 4
    bool m_bIsInRange; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    float32 radius; // offset 0x1A88, size 0x4, align 4
    float32 latch_distance; // offset 0x1A8C, size 0x4, align 4
    int32 damage_absorb; // offset 0x1A90, size 0x4, align 4
    float32 m_flHealthHealed; // offset 0x1A94, size 0x4, align 4
    float32 m_flManaHealed; // offset 0x1A98, size 0x4, align 4
    float32 tether_heal_amp; // offset 0x1A9C, size 0x4, align 4
    float32 tether_mana_amp; // offset 0x1AA0, size 0x4, align 4
    GameTime_t m_flHealMessageTime; // offset 0x1AA4, size 0x4, align 255
    GameTime_t m_flManaMessageTime; // offset 0x1AA8, size 0x4, align 255
    ParticleIndex_t m_nTetherParticle; // offset 0x1AAC, size 0x4, align 255
};
