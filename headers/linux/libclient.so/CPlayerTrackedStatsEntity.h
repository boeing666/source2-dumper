#pragma once

class CPlayerTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7DC]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x7DC, size 0x4, align 255
    int32 m_nTeam; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
};
