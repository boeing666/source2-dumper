#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xCE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    float32 m_gravityScale; // offset 0xC98, size 0x4, align 4
    float32 m_linearLimit; // offset 0xC9C, size 0x4, align 4
    float32 m_linearDamping; // offset 0xCA0, size 0x4, align 4
    float32 m_angularLimit; // offset 0xCA4, size 0x4, align 4
    float32 m_angularDamping; // offset 0xCA8, size 0x4, align 4
    float32 m_linearForce; // offset 0xCAC, size 0x4, align 4
    float32 m_flFrequency; // offset 0xCB0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xCB4, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xCB8, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xCC4, size 0x1, align 1
    char _pad_0CC5[0x3]; // offset 0xCC5
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xCC8, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xCD4, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xCE0, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xCE1, size 0x1, align 1
    char _pad_0CE2[0x6]; // offset 0xCE2
};
