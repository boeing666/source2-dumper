#pragma once

class CTeamTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    DOTATeam_t m_nTeam; // offset 0x500, size 0x4, align 4
    char _pad_0504[0x4]; // offset 0x504
};
