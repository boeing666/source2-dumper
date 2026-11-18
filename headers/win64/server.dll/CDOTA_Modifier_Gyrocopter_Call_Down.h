#pragma once

class CDOTA_Modifier_Gyrocopter_Call_Down : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 slow_duration; // offset 0x1AF8, size 0x4, align 4
    int32 damage; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    int32 slow; // offset 0x1B04, size 0x4, align 4
    bool m_bDelayed; // offset 0x1B08, size 0x1, align 1
    bool m_bAttachToRocket1; // offset 0x1B09, size 0x1, align 1
    char _pad_1B0A[0x6]; // offset 0x1B0A
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x1B10, size 0x18, align 8
    bool m_bHitInvisibleHeroes; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    ParticleIndex_t m_nMarkerIndex; // offset 0x1B2C, size 0x4, align 255
    bool m_bIsTrackingMissile; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    CHandle< CBaseEntity > m_hTrackingTarget; // offset 0x1B34, size 0x4, align 4
};
