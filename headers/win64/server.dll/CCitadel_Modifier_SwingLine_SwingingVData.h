#pragma once

class CCitadel_Modifier_SwingLine_SwingingVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CPiecewiseCurve m_PullSpeedScaleCurve; // offset 0x760, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flMass; // offset 0x7A0, size 0x4, align 4
    float32 m_flBodyForwardForce; // offset 0x7A4, size 0x4, align 4
    float32 m_flCameraForwardForce; // offset 0x7A8, size 0x4, align 4
    float32 m_flPullForce; // offset 0x7AC, size 0x4, align 4
    float32 m_flGravityForce; // offset 0x7B0, size 0x4, align 4
    float32 m_flDampingForce; // offset 0x7B4, size 0x4, align 4
};
