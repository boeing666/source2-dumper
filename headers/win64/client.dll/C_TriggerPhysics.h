#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    float32 m_gravityScale; // offset 0xB70, size 0x4, align 4
    float32 m_linearLimit; // offset 0xB74, size 0x4, align 4
    float32 m_linearDamping; // offset 0xB78, size 0x4, align 4
    float32 m_angularLimit; // offset 0xB7C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xB80, size 0x4, align 4
    float32 m_linearForce; // offset 0xB84, size 0x4, align 4
    float32 m_flFrequency; // offset 0xB88, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xB8C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xB90, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xB9C, size 0x1, align 1
    char _pad_0B9D[0x3]; // offset 0xB9D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xBA0, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xBAC, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x7]; // offset 0xBB9
};
