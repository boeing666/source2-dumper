#pragma once

class C_TriggerPhysics : public C_BaseTrigger /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    float32 m_gravityScale; // offset 0xCF8, size 0x4, align 4
    float32 m_linearLimit; // offset 0xCFC, size 0x4, align 4
    float32 m_linearDamping; // offset 0xD00, size 0x4, align 4
    float32 m_angularLimit; // offset 0xD04, size 0x4, align 4
    float32 m_angularDamping; // offset 0xD08, size 0x4, align 4
    float32 m_linearForce; // offset 0xD0C, size 0x4, align 4
    float32 m_flFrequency; // offset 0xD10, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xD14, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xD18, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xD24, size 0x1, align 1
    char _pad_0D25[0x3]; // offset 0xD25
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xD28, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xD34, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0xD40, size 0x1, align 1
    char _pad_0D41[0x7]; // offset 0xD41
};
