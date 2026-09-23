#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xCA8, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xCB0, size 0x4, align 4
    float32 m_linearLimit; // offset 0xCB4, size 0x4, align 4
    float32 m_linearDamping; // offset 0xCB8, size 0x4, align 4
    float32 m_angularLimit; // offset 0xCBC, size 0x4, align 4
    float32 m_angularDamping; // offset 0xCC0, size 0x4, align 4
    float32 m_linearForce; // offset 0xCC4, size 0x4, align 4
    float32 m_flFrequency; // offset 0xCC8, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xCCC, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xCD0, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xCDC, size 0x1, align 1
    char _pad_0CDD[0x3]; // offset 0xCDD
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xCE0, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xCEC, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xCF8, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xCF9, size 0x1, align 1
    char _pad_0CFA[0x6]; // offset 0xCFA
};
