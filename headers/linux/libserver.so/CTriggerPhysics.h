#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD18]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xD18, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xD20, size 0x4, align 4
    float32 m_linearLimit; // offset 0xD24, size 0x4, align 4
    float32 m_linearDamping; // offset 0xD28, size 0x4, align 4
    float32 m_angularLimit; // offset 0xD2C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xD30, size 0x4, align 4
    float32 m_linearForce; // offset 0xD34, size 0x4, align 4
    float32 m_flFrequency; // offset 0xD38, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xD3C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xD40, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xD4C, size 0x1, align 1
    char _pad_0D4D[0x3]; // offset 0xD4D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xD50, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xD5C, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xD68, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xD69, size 0x1, align 1
    char _pad_0D6A[0x6]; // offset 0xD6A
};
