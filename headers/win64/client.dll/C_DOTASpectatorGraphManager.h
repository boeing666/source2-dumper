#pragma once

class C_DOTASpectatorGraphManager  // sizeof 0x9F8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x28, size 0x28, align 255 | MNotSaved
    bool m_bTrackingTeamStats; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
    GameTime_t m_flStartTime; // offset 0x54, size 0x4, align 255
    int32[64] m_rgRadiantTotalEarnedGold; // offset 0x58, size 0x100, align 4
    int32[64] m_rgDireTotalEarnedGold; // offset 0x158, size 0x100, align 4
    int32[64] m_rgRadiantTotalEarnedXP; // offset 0x258, size 0x100, align 4
    int32[64] m_rgDireTotalEarnedXP; // offset 0x358, size 0x100, align 4
    int32[64] m_rgRadiantNetWorth; // offset 0x458, size 0x100, align 4
    int32[64] m_rgDireNetWorth; // offset 0x558, size 0x100, align 4
    GameTime_t m_flTotalEarnedGoldStartTime; // offset 0x658, size 0x4, align 255
    GameTime_t m_flTotalEarnedGoldEndTime; // offset 0x65C, size 0x4, align 255
    int32 m_nGoldGraphVersion; // offset 0x660, size 0x4, align 4
    int32[64] m_rgRadiantWinChance; // offset 0x664, size 0x100, align 4
    char _pad_0764[0x4]; // offset 0x764
    CountdownTimer m_TeamStatsUpdateTimer; // offset 0x768, size 0x18, align 8
    CountdownTimer m_HeroInventorySnapshotTimer; // offset 0x780, size 0x18, align 8
    CUtlVector< sPlayerSnapshot >[24] m_vecPlayerSnapshots; // offset 0x798, size 0x240, align 8
    char _pad_09D8[0x18]; // offset 0x9D8
    uint32 m_unDataChangedCount; // offset 0x9F0, size 0x4, align 4
    char _pad_09F4[0x4]; // offset 0x9F4
};
