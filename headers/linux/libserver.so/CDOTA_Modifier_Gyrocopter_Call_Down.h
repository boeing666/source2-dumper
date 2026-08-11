#pragma once

class CDOTA_Modifier_Gyrocopter_Call_Down : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow_duration; // offset 0x1A78, size 0x4, align 4
    int32 damage; // offset 0x1A7C, size 0x4, align 4
    float32 radius; // offset 0x1A80, size 0x4, align 4
    int32 slow; // offset 0x1A84, size 0x4, align 4
    bool m_bDelayed; // offset 0x1A88, size 0x1, align 1
    bool m_bAttachToRocket1; // offset 0x1A89, size 0x1, align 1
    char _pad_1A8A[0x6]; // offset 0x1A8A
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x1A90, size 0x18, align 8
    bool m_bHitInvisibleHeroes; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    ParticleIndex_t m_nMarkerIndex; // offset 0x1AAC, size 0x4, align 255
    bool m_bIsTrackingMissile; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    CHandle< CBaseEntity > m_hTrackingTarget; // offset 0x1AB4, size 0x4, align 4
};
