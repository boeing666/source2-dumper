#pragma once

class CPhysicsEntitySolver : public CLogicalEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CHandle< CBaseEntity > m_hMovingEntity; // offset 0x7A0, size 0x4, align 4
    CHandle< CBaseEntity > m_hPhysicsBlocker; // offset 0x7A4, size 0x4, align 4
    float32 m_separationDuration; // offset 0x7A8, size 0x4, align 4
    GameTime_t m_cancelTime; // offset 0x7AC, size 0x4, align 255
};
