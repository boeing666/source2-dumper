#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0x11D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    float32 m_gravityScale; // offset 0x1180, size 0x4, align 4
    float32 m_linearLimit; // offset 0x1184, size 0x4, align 4
    float32 m_linearDamping; // offset 0x1188, size 0x4, align 4
    float32 m_angularLimit; // offset 0x118C, size 0x4, align 4
    float32 m_angularDamping; // offset 0x1190, size 0x4, align 4
    float32 m_linearForce; // offset 0x1194, size 0x4, align 4
    float32 m_flFrequency; // offset 0x1198, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x119C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x11A0, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0x11AC, size 0x1, align 1
    char _pad_11AD[0x3]; // offset 0x11AD
    VectorWS m_vecLinearForcePointAtWorld; // offset 0x11B0, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0x11BC, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0x11C8, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0x11C9, size 0x1, align 1
    char _pad_11CA[0x6]; // offset 0x11CA
};
