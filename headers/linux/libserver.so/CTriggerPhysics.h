#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xBC8, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xBD0, size 0x4, align 4
    float32 m_linearLimit; // offset 0xBD4, size 0x4, align 4
    float32 m_linearDamping; // offset 0xBD8, size 0x4, align 4
    float32 m_angularLimit; // offset 0xBDC, size 0x4, align 4
    float32 m_angularDamping; // offset 0xBE0, size 0x4, align 4
    float32 m_linearForce; // offset 0xBE4, size 0x4, align 4
    float32 m_flFrequency; // offset 0xBE8, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xBEC, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xBF0, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xBFC, size 0x1, align 1
    char _pad_0BFD[0x3]; // offset 0xBFD
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xC00, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xC0C, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x7]; // offset 0xC19
};
