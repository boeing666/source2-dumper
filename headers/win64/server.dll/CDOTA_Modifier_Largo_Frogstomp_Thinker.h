#pragma once

class CDOTA_Modifier_Largo_Frogstomp_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_per_stomp; // offset 0x1AF8, size 0x4, align 4
    int32 total_ticks; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 stun_duration; // offset 0x1B04, size 0x4, align 4
    float32 stomp_interval; // offset 0x1B08, size 0x4, align 4
    float32 delay; // offset 0x1B0C, size 0x4, align 4
    int32 infinite_stomps; // offset 0x1B10, size 0x4, align 4
    bool m_bStarted; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    ParticleIndex_t m_nFXIndex; // offset 0x1B18, size 0x4, align 255
    float32 m_flFroglingScale; // offset 0x1B1C, size 0x4, align 4
    int32 nNumTicks; // offset 0x1B20, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1B24, size 0x1, align 1
    bool m_bPendingDestroy; // offset 0x1B25, size 0x1, align 1
    char _pad_1B26[0x2]; // offset 0x1B26
    CUtlVector< CHandle< CBaseEntity > > m_hHitHeroes; // offset 0x1B28, size 0x18, align 8
};
