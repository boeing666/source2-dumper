#pragma once

class CCitadelProjectileTrackingParams  // sizeof 0x90, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    bool m_bDisableSolidCollisions; // offset 0x0, size 0x1, align 1 | MPropertyDescription
    char _pad_0001[0x7]; // offset 0x1
    CPiecewiseCurve m_TrackingAmountCurve; // offset 0x8, size 0x40, align 8 | MPropertyDescription
    CPiecewiseCurve m_ProjectileSpeedCurve; // offset 0x48, size 0x40, align 8 | MPropertyDescription
    float32 m_flMinTrackingTimeBeforeImpact; // offset 0x88, size 0x4, align 4 | MPropertyDescription
    char _pad_008C[0x4]; // offset 0x8C
};
