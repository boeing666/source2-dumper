#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0x1070, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    float32 m_gravityScale; // offset 0x1020, size 0x4, align 4
    float32 m_linearLimit; // offset 0x1024, size 0x4, align 4
    float32 m_linearDamping; // offset 0x1028, size 0x4, align 4
    float32 m_angularLimit; // offset 0x102C, size 0x4, align 4
    float32 m_angularDamping; // offset 0x1030, size 0x4, align 4
    float32 m_linearForce; // offset 0x1034, size 0x4, align 4
    float32 m_flFrequency; // offset 0x1038, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x103C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x1040, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0x104C, size 0x1, align 1
    char _pad_104D[0x3]; // offset 0x104D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0x1050, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0x105C, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0x1068, size 0x1, align 1
    char _pad_1069[0x7]; // offset 0x1069
};
