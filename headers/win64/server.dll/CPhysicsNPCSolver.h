#pragma once

class CPhysicsNPCSolver : public CLogicalEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CPhysicsNPCSolver* m_pNext; // offset 0x4A8, size 0x8, align 8 | MNotSaved
    CHandle< CAI_BaseNPC > m_hNPC; // offset 0x4B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hEntity; // offset 0x4B4, size 0x4, align 4
    IPhysicsMotionController* m_pController; // offset 0x4B8, size 0x8, align 8 | MPhysPtr
    float32 m_separationDuration; // offset 0x4C0, size 0x4, align 4
    GameTime_t m_cancelTime; // offset 0x4C4, size 0x4, align 255
    bool m_allowIntersection; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x7]; // offset 0x4C9
};
