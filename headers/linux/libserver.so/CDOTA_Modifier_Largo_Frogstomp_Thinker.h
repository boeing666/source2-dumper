#pragma once

class CDOTA_Modifier_Largo_Frogstomp_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_per_stomp; // offset 0x1AA8, size 0x4, align 4
    int32 total_ticks; // offset 0x1AAC, size 0x4, align 4
    float32 radius; // offset 0x1AB0, size 0x4, align 4
    float32 stun_duration; // offset 0x1AB4, size 0x4, align 4
    float32 stomp_interval; // offset 0x1AB8, size 0x4, align 4
    float32 delay; // offset 0x1ABC, size 0x4, align 4
    int32 infinite_stomps; // offset 0x1AC0, size 0x4, align 4
    bool m_bStarted; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    ParticleIndex_t m_nFXIndex; // offset 0x1AC8, size 0x4, align 255
    int32 nNumTicks; // offset 0x1ACC, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1AD0, size 0x1, align 1
    bool m_bPendingDestroy; // offset 0x1AD1, size 0x1, align 1
    char _pad_1AD2[0x6]; // offset 0x1AD2
    CUtlVector< CHandle< CBaseEntity > > m_hHitHeroes; // offset 0x1AD8, size 0x18, align 8
};
