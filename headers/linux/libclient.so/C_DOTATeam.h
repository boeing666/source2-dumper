#pragma once

class C_DOTATeam : public C_Team /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 m_iHeroKills; // offset 0x828, size 0x4, align 4
    int32 m_iTowerKills; // offset 0x82C, size 0x4, align 4
    int32 m_iBarracksKills; // offset 0x830, size 0x4, align 4
    uint32 m_unTournamentTeamID; // offset 0x834, size 0x4, align 4
    uint64 m_ulTeamLogo; // offset 0x838, size 0x8, align 8
    uint64 m_ulTeamBaseLogo; // offset 0x840, size 0x8, align 8
    uint64 m_ulTeamBannerLogo; // offset 0x848, size 0x8, align 8
    bool m_bTeamComplete; // offset 0x850, size 0x1, align 1
    bool m_bTeamIsHomeTeam; // offset 0x851, size 0x1, align 1
    bool m_bTeamCanSeeExactRoshanTimer; // offset 0x852, size 0x1, align 1
    bool m_bTeamCanSeeNextPowerRune; // offset 0x853, size 0x1, align 1
    Color m_CustomHealthbarColor; // offset 0x854, size 0x4, align 1
    char[33] m_szTag; // offset 0x858, size 0x21, align 1
    char _pad_0879[0x7]; // offset 0x879
};
