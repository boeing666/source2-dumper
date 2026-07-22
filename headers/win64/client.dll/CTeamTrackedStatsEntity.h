#pragma once

class CTeamTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x660]; // offset 0x0
    int32 m_nTeam; // offset 0x660, size 0x4, align 4 | MNetworkEnable
    char _pad_0664[0x4]; // offset 0x664
};
