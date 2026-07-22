#pragma once

class CDOTASpectatorGraphManager  // sizeof 0x9D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x20, size 0x28, align 255 | MNotSaved
    bool m_bTrackingTeamStats; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
    GameTime_t m_flStartTime; // offset 0x4C, size 0x4, align 255
    int32[64] m_rgRadiantTotalEarnedGold; // offset 0x50, size 0x100, align 4
    int32[64] m_rgDireTotalEarnedGold; // offset 0x150, size 0x100, align 4
    int32[64] m_rgRadiantTotalEarnedXP; // offset 0x250, size 0x100, align 4
    int32[64] m_rgDireTotalEarnedXP; // offset 0x350, size 0x100, align 4
    int32[64] m_rgRadiantNetWorth; // offset 0x450, size 0x100, align 4
    int32[64] m_rgDireNetWorth; // offset 0x550, size 0x100, align 4
    GameTime_t m_flTotalEarnedGoldStartTime; // offset 0x650, size 0x4, align 255
    GameTime_t m_flTotalEarnedGoldEndTime; // offset 0x654, size 0x4, align 255
    int32 m_nGoldGraphVersion; // offset 0x658, size 0x4, align 4
    int32[64] m_rgRadiantWinChance; // offset 0x65C, size 0x100, align 4
    char _pad_075C[0x4]; // offset 0x75C
    CountdownTimer m_TeamStatsUpdateTimer; // offset 0x760, size 0x18, align 8
    CountdownTimer m_HeroInventorySnapshotTimer; // offset 0x778, size 0x18, align 8
    CUtlVector< sPlayerSnapshot >[24] m_vecPlayerSnapshots; // offset 0x790, size 0x240, align 8
    int32 m_event_dota_player_killed; // offset 0x9D0, size 0x4, align 4
    int32 m_event_server_pre_shutdown; // offset 0x9D4, size 0x4, align 4
};
