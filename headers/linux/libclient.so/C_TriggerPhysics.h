#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xEA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE50]; // offset 0x0
    float32 m_gravityScale; // offset 0xE50, size 0x4, align 4
    float32 m_linearLimit; // offset 0xE54, size 0x4, align 4
    float32 m_linearDamping; // offset 0xE58, size 0x4, align 4
    float32 m_angularLimit; // offset 0xE5C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xE60, size 0x4, align 4
    float32 m_linearForce; // offset 0xE64, size 0x4, align 4
    float32 m_flFrequency; // offset 0xE68, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xE6C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xE70, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xE7C, size 0x1, align 1
    char _pad_0E7D[0x3]; // offset 0xE7D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xE80, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xE8C, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xE98, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xE99, size 0x1, align 1
    char _pad_0E9A[0x6]; // offset 0xE9A
};
