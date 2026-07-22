#pragma once

class C_CSPlayerResource : public C_BaseEntity /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool[12] m_bHostageAlive; // offset 0x600, size 0xC, align 1
    bool[12] m_isHostageFollowingSomeone; // offset 0x60C, size 0xC, align 1
    CEntityIndex[12] m_iHostageEntityIDs; // offset 0x618, size 0x30, align 4
    VectorWS m_bombsiteCenterA; // offset 0x648, size 0xC, align 4
    VectorWS m_bombsiteCenterB; // offset 0x654, size 0xC, align 4
    int32[4] m_hostageRescueX; // offset 0x660, size 0x10, align 4
    int32[4] m_hostageRescueY; // offset 0x670, size 0x10, align 4
    int32[4] m_hostageRescueZ; // offset 0x680, size 0x10, align 4
    bool m_bEndMatchNextMapAllVoted; // offset 0x690, size 0x1, align 1
    bool m_foundGoalPositions; // offset 0x691, size 0x1, align 1
    char _pad_0692[0x6]; // offset 0x692
};
