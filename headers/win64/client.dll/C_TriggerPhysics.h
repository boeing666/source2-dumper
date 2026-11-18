#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    float32 m_gravityScale; // offset 0xCC0, size 0x4, align 4
    float32 m_linearLimit; // offset 0xCC4, size 0x4, align 4
    float32 m_linearDamping; // offset 0xCC8, size 0x4, align 4
    float32 m_angularLimit; // offset 0xCCC, size 0x4, align 4
    float32 m_angularDamping; // offset 0xCD0, size 0x4, align 4
    float32 m_linearForce; // offset 0xCD4, size 0x4, align 4
    float32 m_flFrequency; // offset 0xCD8, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xCDC, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xCE0, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xCEC, size 0x1, align 1
    char _pad_0CED[0x3]; // offset 0xCED
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xCF0, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xCFC, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xD08, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xD09, size 0x1, align 1
    char _pad_0D0A[0x6]; // offset 0xD0A
};
