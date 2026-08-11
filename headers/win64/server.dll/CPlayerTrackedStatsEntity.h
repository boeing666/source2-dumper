#pragma once

class CPlayerTrackedStatsEntity : public CBaseTrackedStatsEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x508]; // offset 0x0
    CPlayerSlot m_nPlayerSlot; // offset 0x508, size 0x4, align 4 | MNetworkEnable
    int32 m_nTeam; // offset 0x50C, size 0x4, align 4
};
