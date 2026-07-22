#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD0]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xBD0, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xBD8, size 0x4, align 4
    float32 m_linearLimit; // offset 0xBDC, size 0x4, align 4
    float32 m_linearDamping; // offset 0xBE0, size 0x4, align 4
    float32 m_angularLimit; // offset 0xBE4, size 0x4, align 4
    float32 m_angularDamping; // offset 0xBE8, size 0x4, align 4
    float32 m_linearForce; // offset 0xBEC, size 0x4, align 4
    float32 m_flFrequency; // offset 0xBF0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xBF4, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xBF8, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xC04, size 0x1, align 1
    char _pad_0C05[0x3]; // offset 0xC05
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xC08, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xC14, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x7]; // offset 0xC21
};
