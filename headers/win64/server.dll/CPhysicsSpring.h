#pragma once

class CPhysicsSpring : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    IPhysicsJoint* m_pSpringJoint; // offset 0x498, size 0x8, align 8 | MPhysPtr
    float32 m_flFrequency; // offset 0x4A0, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x4A4, size 0x4, align 4
    float32 m_flRestLength; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_nameAttachStart; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_nameAttachEnd; // offset 0x4B8, size 0x8, align 8
    VectorWS m_start; // offset 0x4C0, size 0xC, align 4
    VectorWS m_end; // offset 0x4CC, size 0xC, align 4
    uint32 m_teleportTick; // offset 0x4D8, size 0x4, align 4 | MNotSaved
    char _pad_04DC[0x4]; // offset 0x4DC
};
