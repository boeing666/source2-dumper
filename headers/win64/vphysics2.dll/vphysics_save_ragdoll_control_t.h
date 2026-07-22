#pragma once

struct vphysics_save_ragdoll_control_t  // sizeof 0x38, align 0x4 [trivial_ctor trivial_dtor] (vphysics2) {MGetKV3ClassDefaults}
{
    float32 m_flMinSpringFrequency; // offset 0x0, size 0x4, align 4
    float32 m_flMaxSpringFrequency; // offset 0x4, size 0x4, align 4
    float32 m_flMaxStretch; // offset 0x8, size 0x4, align 4
    bool m_bSolidCollisionAtZeroWeight; // offset 0xC, size 0x1, align 1
    bool m_bRequiresDynamicBodies; // offset 0xD, size 0x1, align 1
    bool m_bIgnoreTeleport; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
    Vector m_vLinearVelocityAccumulator; // offset 0x10, size 0xC, align 4
    RotationVector m_vAngularVelocityAccumulator; // offset 0x1C, size 0xC, align 4
    Vector m_vForceAccumulator; // offset 0x28, size 0xC, align 4
    int32 m_nBodyCount; // offset 0x34, size 0x4, align 4
};
