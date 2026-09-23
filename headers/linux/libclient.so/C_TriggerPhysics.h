#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0x1158, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    float32 m_gravityScale; // offset 0x1108, size 0x4, align 4
    float32 m_linearLimit; // offset 0x110C, size 0x4, align 4
    float32 m_linearDamping; // offset 0x1110, size 0x4, align 4
    float32 m_angularLimit; // offset 0x1114, size 0x4, align 4
    float32 m_angularDamping; // offset 0x1118, size 0x4, align 4
    float32 m_linearForce; // offset 0x111C, size 0x4, align 4
    float32 m_flFrequency; // offset 0x1120, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x1124, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x1128, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0x1134, size 0x1, align 1
    char _pad_1135[0x3]; // offset 0x1135
    VectorWS m_vecLinearForcePointAtWorld; // offset 0x1138, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0x1144, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0x1150, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0x1151, size 0x1, align 1
    char _pad_1152[0x6]; // offset 0x1152
};
