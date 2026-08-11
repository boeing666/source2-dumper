#pragma once

class CPlayerTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x500, size 0x4, align 255
    int32 m_nTeam; // offset 0x504, size 0x4, align 4
};
