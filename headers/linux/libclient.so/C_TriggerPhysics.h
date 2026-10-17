#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xE38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE8]; // offset 0x0
    float32 m_gravityScale; // offset 0xDE8, size 0x4, align 4
    float32 m_linearLimit; // offset 0xDEC, size 0x4, align 4
    float32 m_linearDamping; // offset 0xDF0, size 0x4, align 4
    float32 m_angularLimit; // offset 0xDF4, size 0x4, align 4
    float32 m_angularDamping; // offset 0xDF8, size 0x4, align 4
    float32 m_linearForce; // offset 0xDFC, size 0x4, align 4
    float32 m_flFrequency; // offset 0xE00, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xE04, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xE08, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xE14, size 0x1, align 1
    char _pad_0E15[0x3]; // offset 0xE15
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xE18, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xE24, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xE30, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xE31, size 0x1, align 1
    char _pad_0E32[0x6]; // offset 0xE32
};
