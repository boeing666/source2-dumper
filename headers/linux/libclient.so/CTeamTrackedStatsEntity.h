#pragma once

class CTeamTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7DC]; // offset 0x0
    DOTATeam_t m_nTeam; // offset 0x7DC, size 0x4, align 4
};
