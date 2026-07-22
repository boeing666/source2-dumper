#pragma once

class CPhysicsSpring : public CBaseEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    IPhysicsJoint* m_pSpringJoint; // offset 0x778, size 0x8, align 8 | MPhysPtr
    float32 m_flFrequency; // offset 0x780, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x784, size 0x4, align 4
    float32 m_flRestLength; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_nameAttachStart; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_nameAttachEnd; // offset 0x798, size 0x8, align 8
    VectorWS m_start; // offset 0x7A0, size 0xC, align 4
    VectorWS m_end; // offset 0x7AC, size 0xC, align 4
    uint32 m_teleportTick; // offset 0x7B8, size 0x4, align 4 | MNotSaved
    char _pad_07BC[0x4]; // offset 0x7BC
};
