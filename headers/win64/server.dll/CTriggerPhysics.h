#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA38]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0xA38, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0xA40, size 0x4, align 4
    float32 m_linearLimit; // offset 0xA44, size 0x4, align 4
    float32 m_linearDamping; // offset 0xA48, size 0x4, align 4
    float32 m_angularLimit; // offset 0xA4C, size 0x4, align 4
    float32 m_angularDamping; // offset 0xA50, size 0x4, align 4
    float32 m_linearForce; // offset 0xA54, size 0x4, align 4
    float32 m_flFrequency; // offset 0xA58, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0xA5C, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0xA60, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0xA6C, size 0x1, align 1
    char _pad_0A6D[0x3]; // offset 0xA6D
    VectorWS m_vecLinearForcePointAtWorld; // offset 0xA70, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0xA7C, size 0xC, align 4
    bool m_bForceDirectionIsInLocalSpace; // offset 0xA88, size 0x1, align 1
    bool m_bConvertToDebrisWhenPossible; // offset 0xA89, size 0x1, align 1
    char _pad_0A8A[0x6]; // offset 0xA8A
};
