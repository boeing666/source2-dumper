#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    float32 m_gravityScale; // offset 0xC60, size 0x4, align 4
    float32 m_linearLimit; // offset 0xC64, size 0x4, align 4
    float32 m_linearDamping; // offset 0xC68, size 0x4, align 4
    float32 m_angularLimit; // offset 0xC6C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xC70, size 0x4, align 4
    float32 m_linearForce; // offset 0xC74, size 0x4, align 4
    float32 m_flFrequency; // offset 0xC78, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xC7C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xC80, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xC8C, size 0x1, align 1
    char _pad_0C8D[0x3]; // offset 0xC8D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xC90, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xC9C, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xCA8, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xCA9, size 0x1, align 1
    char _pad_0CAA[0x6]; // offset 0xCAA
};
