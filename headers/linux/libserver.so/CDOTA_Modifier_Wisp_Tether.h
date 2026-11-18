#pragma once

class CDOTA_Modifier_Wisp_Tether : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bInManaGained; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AFC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > hStunnedEntities; // offset 0x1B00, size 0x18, align 8
    float32 stun_duration; // offset 0x1B18, size 0x4, align 4
    int32 movespeed; // offset 0x1B1C, size 0x4, align 4
    int32 self_bonus; // offset 0x1B20, size 0x4, align 4
    bool m_bIsInRange; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
    float32 radius; // offset 0x1B28, size 0x4, align 4
    float32 latch_distance; // offset 0x1B2C, size 0x4, align 4
    int32 damage_absorb; // offset 0x1B30, size 0x4, align 4
    float32 m_flHealthHealed; // offset 0x1B34, size 0x4, align 4
    float32 m_flManaHealed; // offset 0x1B38, size 0x4, align 4
    float32 tether_heal_amp; // offset 0x1B3C, size 0x4, align 4
    float32 tether_mana_amp; // offset 0x1B40, size 0x4, align 4
    GameTime_t m_flHealMessageTime; // offset 0x1B44, size 0x4, align 255
    GameTime_t m_flManaMessageTime; // offset 0x1B48, size 0x4, align 255
    ParticleIndex_t m_nTetherParticle; // offset 0x1B4C, size 0x4, align 255
};
