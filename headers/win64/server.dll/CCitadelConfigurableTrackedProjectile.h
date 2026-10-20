#pragma once

class CCitadelConfigurableTrackedProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    ETrackedProjectileTarget_t m_eTrackedTargetType; // offset 0x970, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x974, size 0x4, align 4
    GameTime_t m_flTrackingStartTime; // offset 0x978, size 0x4, align 255
    VectorWS m_vLastValidPosition; // offset 0x97C, size 0xC, align 4
    float32 m_flTrackingDuration; // offset 0x988, size 0x4, align 4
    char _pad_098C[0x4]; // offset 0x98C
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x990, size 0x90, align 8
};
