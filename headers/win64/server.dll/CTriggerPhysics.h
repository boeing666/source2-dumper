#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F8]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0x9F8, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xA00, size 0x4, align 4
    float32 m_linearLimit; // offset 0xA04, size 0x4, align 4
    float32 m_linearDamping; // offset 0xA08, size 0x4, align 4
    float32 m_angularLimit; // offset 0xA0C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xA10, size 0x4, align 4
    float32 m_linearForce; // offset 0xA14, size 0x4, align 4
    float32 m_flFrequency; // offset 0xA18, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xA1C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xA20, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xA2C, size 0x1, align 1
    char _pad_0A2D[0x3]; // offset 0xA2D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xA30, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xA3C, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xA48, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xA49, size 0x1, align 1
    char _pad_0A4A[0x6]; // offset 0xA4A
};
