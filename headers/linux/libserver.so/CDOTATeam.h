#pragma once

class CDOTATeam : public CTeam /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x83C]; // offset 0x0
    int32 m_iHeroKills; // offset 0x83C, size 0x4, align 4
    int32 m_iTowerKills; // offset 0x840, size 0x4, align 4
    int32 m_iBarracksKills; // offset 0x844, size 0x4, align 4
    uint32 m_unTournamentTeamID; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    uint64 m_ulTeamLogo; // offset 0x850, size 0x8, align 8
    uint64 m_ulTeamBaseLogo; // offset 0x858, size 0x8, align 8
    uint64 m_ulTeamBannerLogo; // offset 0x860, size 0x8, align 8
    bool m_bTeamComplete; // offset 0x868, size 0x1, align 1
    bool m_bTeamIsHomeTeam; // offset 0x869, size 0x1, align 1
    bool m_bTeamCanSeeExactRoshanTimer; // offset 0x86A, size 0x1, align 1
    bool m_bTeamCanSeeNextPowerRune; // offset 0x86B, size 0x1, align 1
    int32 m_nTeamCanSeeNextPowerRuneRefs; // offset 0x86C, size 0x4, align 4
    Color m_CustomHealthbarColor; // offset 0x870, size 0x4, align 1
    char[33] m_szTag; // offset 0x874, size 0x21, align 1
    char _pad_0895[0x3]; // offset 0x895
    int32 m_event_lobby_updated; // offset 0x898, size 0x4, align 4
    int32 m_nKillStreak; // offset 0x89C, size 0x4, align 4
    int32 m_iRecentKillCount; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    CountdownTimer m_RecentHeroKillTimer; // offset 0x8A8, size 0x18, align 8
};
