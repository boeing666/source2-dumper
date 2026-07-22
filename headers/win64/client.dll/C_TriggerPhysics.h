#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0x10E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    float32 m_gravityScale; // offset 0x1098, size 0x4, align 4
    float32 m_linearLimit; // offset 0x109C, size 0x4, align 4
    float32 m_linearDamping; // offset 0x10A0, size 0x4, align 4
    float32 m_angularLimit; // offset 0x10A4, size 0x4, align 4
    float32 m_angularDamping; // offset 0x10A8, size 0x4, align 4
    float32 m_linearForce; // offset 0x10AC, size 0x4, align 4
    float32 m_flFrequency; // offset 0x10B0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x10B4, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x10B8, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0x10C4, size 0x1, align 1
    char _pad_10C5[0x3]; // offset 0x10C5
    VectorWS m_vecLinearForcePointAtWorld; // offset 0x10C8, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0x10D4, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0x10E0, size 0x1, align 1
    char _pad_10E1[0x7]; // offset 0x10E1
};
