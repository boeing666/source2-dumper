#pragma once

class C_CSPlayerResource : public C_BaseEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    bool[12] m_bHostageAlive; // offset 0x77C, size 0xC, align 1
    bool[12] m_isHostageFollowingSomeone; // offset 0x788, size 0xC, align 1
    CEntityIndex[12] m_iHostageEntityIDs; // offset 0x794, size 0x30, align 4
    VectorWS m_bombsiteCenterA; // offset 0x7C4, size 0xC, align 4
    VectorWS m_bombsiteCenterB; // offset 0x7D0, size 0xC, align 4
    int32[4] m_hostageRescueX; // offset 0x7DC, size 0x10, align 4
    int32[4] m_hostageRescueY; // offset 0x7EC, size 0x10, align 4
    int32[4] m_hostageRescueZ; // offset 0x7FC, size 0x10, align 4
    bool m_bEndMatchNextMapAllVoted; // offset 0x80C, size 0x1, align 1
    bool m_foundGoalPositions; // offset 0x80D, size 0x1, align 1
    char _pad_080E[0x2]; // offset 0x80E
};
