#pragma once

class CPlayerTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x660, size 0x4, align 255
    int32 m_nTeam; // offset 0x664, size 0x4, align 4
};
