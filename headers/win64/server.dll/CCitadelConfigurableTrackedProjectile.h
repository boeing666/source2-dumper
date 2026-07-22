#pragma once

class CCitadelConfigurableTrackedProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    ETrackedProjectileTarget_t m_eTrackedTargetType; // offset 0x860, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x864, size 0x4, align 4
    GameTime_t m_flTrackingStartTime; // offset 0x868, size 0x4, align 255
    Vector m_vLastValidPosition; // offset 0x86C, size 0xC, align 4
    float32 m_flTrackingDuration; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x880, size 0x90, align 8
};
