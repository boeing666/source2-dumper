#pragma once

class CTriggerPhysics : public CBaseTrigger /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0x8F0, size 0x8, align 8 | MPhysPtr
    float32 m_gravityScale; // offset 0x8F8, size 0x4, align 4
    float32 m_linearLimit; // offset 0x8FC, size 0x4, align 4
    float32 m_linearDamping; // offset 0x900, size 0x4, align 4
    float32 m_angularLimit; // offset 0x904, size 0x4, align 4
    float32 m_angularDamping; // offset 0x908, size 0x4, align 4
    float32 m_linearForce; // offset 0x90C, size 0x4, align 4
    float32 m_flFrequency; // offset 0x910, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x914, size 0x4, align 4
    Vector m_vecLinearForcePointAt; // offset 0x918, size 0xC, align 4
    bool m_bCollapseToForcePoint; // offset 0x924, size 0x1, align 1
    char _pad_0925[0x3]; // offset 0x925
    VectorWS m_vecLinearForcePointAtWorld; // offset 0x928, size 0xC, align 4
    Vector m_vecLinearForceDirection; // offset 0x934, size 0xC, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0x940, size 0x1, align 1
    char _pad_0941[0x7]; // offset 0x941
};
