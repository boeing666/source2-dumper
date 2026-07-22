#pragma once

class CCSPlayerResource : public CBaseEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool[12] m_bHostageAlive; // offset 0x788, size 0xC, align 1
    bool[12] m_isHostageFollowingSomeone; // offset 0x794, size 0xC, align 1
    CEntityIndex[12] m_iHostageEntityIDs; // offset 0x7A0, size 0x30, align 4
    VectorWS m_bombsiteCenterA; // offset 0x7D0, size 0xC, align 4
    VectorWS m_bombsiteCenterB; // offset 0x7DC, size 0xC, align 4
    int32[4] m_hostageRescueX; // offset 0x7E8, size 0x10, align 4
    int32[4] m_hostageRescueY; // offset 0x7F8, size 0x10, align 4
    int32[4] m_hostageRescueZ; // offset 0x808, size 0x10, align 4
    bool m_bEndMatchNextMapAllVoted; // offset 0x818, size 0x1, align 1
    bool m_foundGoalPositions; // offset 0x819, size 0x1, align 1
    char _pad_081A[0x6]; // offset 0x81A
};
