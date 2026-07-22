#pragma once

class CCitadelTrackedProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    ETrackedProjectileTarget_t m_eTrackedTargetType; // offset 0x860, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x864, size 0x4, align 4
    GameTime_t m_flTrackingStartTime; // offset 0x868, size 0x4, align 255
    float32 m_flTrackingDampingCoefficient; // offset 0x86C, size 0x4, align 4
    float32 m_flTrackingSpeed; // offset 0x870, size 0x4, align 4
    float32 m_flTrackingDuration; // offset 0x874, size 0x4, align 4
    GameTime_t m_flTrackingWindowStart; // offset 0x878, size 0x4, align 255
    GameTime_t m_flTrackingWindowEnd; // offset 0x87C, size 0x4, align 255
    Vector m_vLastValidPosition; // offset 0x880, size 0xC, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
