#pragma once

class CDOTATeam : public CTeam /*0x0*/  // sizeof 0x5E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x560]; // offset 0x0
    int32 m_iHeroKills; // offset 0x560, size 0x4, align 4
    int32 m_iTowerKills; // offset 0x564, size 0x4, align 4
    int32 m_iBarracksKills; // offset 0x568, size 0x4, align 4
    uint32 m_unTournamentTeamID; // offset 0x56C, size 0x4, align 4
    uint64 m_ulTeamLogo; // offset 0x570, size 0x8, align 8
    uint64 m_ulTeamBaseLogo; // offset 0x578, size 0x8, align 8
    uint64 m_ulTeamBannerLogo; // offset 0x580, size 0x8, align 8
    bool m_bTeamComplete; // offset 0x588, size 0x1, align 1
    bool m_bTeamIsHomeTeam; // offset 0x589, size 0x1, align 1
    bool m_bTeamCanSeeExactRoshanTimer; // offset 0x58A, size 0x1, align 1
    bool m_bTeamCanSeeNextPowerRune; // offset 0x58B, size 0x1, align 1
    int32 m_nTeamCanSeeNextPowerRuneRefs; // offset 0x58C, size 0x4, align 4
    Color m_CustomHealthbarColor; // offset 0x590, size 0x4, align 1
    char[33] m_szTag; // offset 0x594, size 0x21, align 1
    char _pad_05B5[0x3]; // offset 0x5B5
    int32 m_event_lobby_updated; // offset 0x5B8, size 0x4, align 4
    int32 m_nKillStreak; // offset 0x5BC, size 0x4, align 4
    int32 m_iRecentKillCount; // offset 0x5C0, size 0x4, align 4
    char _pad_05C4[0x4]; // offset 0x5C4
    CountdownTimer m_RecentHeroKillTimer; // offset 0x5C8, size 0x18, align 8
};
