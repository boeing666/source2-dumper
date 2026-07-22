#pragma once

class CPhysForce : public CPointEntity /*0x0*/  // sizeof 0x7D8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0x778, size 0x8, align 8 | MPhysPtr
    CUtlSymbolLarge m_nameAttach; // offset 0x780, size 0x8, align 8
    float32 m_force; // offset 0x788, size 0x4, align 4
    float32 m_forceTime; // offset 0x78C, size 0x4, align 4
    CHandle< CBaseEntity > m_attachedObject; // offset 0x790, size 0x4, align 4
    bool m_wasRestored; // offset 0x794, size 0x1, align 1 | MNotSaved
    char _pad_0795[0x3]; // offset 0x795
    CConstantForceController m_integrator; // offset 0x798, size 0x40, align 8
};
