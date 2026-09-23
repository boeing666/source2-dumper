#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0x9D0, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0x9D8, size 0x4, align 4
    float32 m_linearLimit; // offset 0x9DC, size 0x4, align 4
    float32 m_linearDamping; // offset 0x9E0, size 0x4, align 4
    float32 m_angularLimit; // offset 0x9E4, size 0x4, align 4
    float32 m_angularDamping; // offset 0x9E8, size 0x4, align 4
    float32 m_linearForce; // offset 0x9EC, size 0x4, align 4
    float32 m_flFrequency; // offset 0x9F0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x9F4, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x9F8, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xA04, size 0x1, align 1
    char _pad_0A05[0x3]; // offset 0xA05
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xA08, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xA14, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xA20, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xA21, size 0x1, align 1
    char _pad_0A22[0x6]; // offset 0xA22
};
