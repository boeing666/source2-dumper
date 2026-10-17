#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xCB0, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xCB8, size 0x4, align 4
    float32 m_linearLimit; // offset 0xCBC, size 0x4, align 4
    float32 m_linearDamping; // offset 0xCC0, size 0x4, align 4
    float32 m_angularLimit; // offset 0xCC4, size 0x4, align 4
    float32 m_angularDamping; // offset 0xCC8, size 0x4, align 4
    float32 m_linearForce; // offset 0xCCC, size 0x4, align 4
    float32 m_flFrequency; // offset 0xCD0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xCD4, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xCD8, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xCE4, size 0x1, align 1
    char _pad_0CE5[0x3]; // offset 0xCE5
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xCE8, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xCF4, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xD00, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xD01, size 0x1, align 1
    char _pad_0D02[0x6]; // offset 0xD02
};
