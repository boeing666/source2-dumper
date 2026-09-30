#pragma once

class CCitadelTrackedProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    ETrackedProjectileTarget_t m_eTrackedTargetType; // offset 0x968, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x96C, size 0x4, align 4
    GameTime_t m_flTrackingStartTime; // offset 0x970, size 0x4, align 255
    float32 m_flTrackingDampingCoefficient; // offset 0x974, size 0x4, align 4
    float32 m_flTrackingSpeed; // offset 0x978, size 0x4, align 4
    float32 m_flTrackingDuration; // offset 0x97C, size 0x4, align 4
    GameTime_t m_flTrackingWindowStart; // offset 0x980, size 0x4, align 255
    GameTime_t m_flTrackingWindowEnd; // offset 0x984, size 0x4, align 255
    VectorWS m_vLastValidPosition; // offset 0x988, size 0xC, align 4
    char _pad_0994[0x4]; // offset 0x994
};
