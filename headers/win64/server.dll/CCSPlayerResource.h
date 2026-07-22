#pragma once

class CCSPlayerResource : public CBaseEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool[12] m_bHostageAlive; // offset 0x4A8, size 0xC, align 1
    bool[12] m_isHostageFollowingSomeone; // offset 0x4B4, size 0xC, align 1
    CEntityIndex[12] m_iHostageEntityIDs; // offset 0x4C0, size 0x30, align 4
    VectorWS m_bombsiteCenterA; // offset 0x4F0, size 0xC, align 4
    VectorWS m_bombsiteCenterB; // offset 0x4FC, size 0xC, align 4
    int32[4] m_hostageRescueX; // offset 0x508, size 0x10, align 4
    int32[4] m_hostageRescueY; // offset 0x518, size 0x10, align 4
    int32[4] m_hostageRescueZ; // offset 0x528, size 0x10, align 4
    bool m_bEndMatchNextMapAllVoted; // offset 0x538, size 0x1, align 1
    bool m_foundGoalPositions; // offset 0x539, size 0x1, align 1
    char _pad_053A[0x6]; // offset 0x53A
};
