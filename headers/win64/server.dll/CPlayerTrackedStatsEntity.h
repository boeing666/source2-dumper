#pragma once

class CPlayerTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x518]; // offset 0x0
    CPlayerSlot m_nPlayerSlot; // offset 0x518, size 0x4, align 4
    int32 m_nTeam; // offset 0x51C, size 0x4, align 4
};
