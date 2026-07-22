#pragma once

class C_DOTATeam : public C_Team /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iHeroKills; // offset 0x6A8, size 0x4, align 4
    int32 m_iTowerKills; // offset 0x6AC, size 0x4, align 4
    int32 m_iBarracksKills; // offset 0x6B0, size 0x4, align 4
    uint32 m_unTournamentTeamID; // offset 0x6B4, size 0x4, align 4
    uint64 m_ulTeamLogo; // offset 0x6B8, size 0x8, align 8
    uint64 m_ulTeamBaseLogo; // offset 0x6C0, size 0x8, align 8
    uint64 m_ulTeamBannerLogo; // offset 0x6C8, size 0x8, align 8
    bool m_bTeamComplete; // offset 0x6D0, size 0x1, align 1
    bool m_bTeamIsHomeTeam; // offset 0x6D1, size 0x1, align 1
    bool m_bTeamCanSeeExactRoshanTimer; // offset 0x6D2, size 0x1, align 1
    bool m_bTeamCanSeeNextPowerRune; // offset 0x6D3, size 0x1, align 1
    Color m_CustomHealthbarColor; // offset 0x6D4, size 0x4, align 1
    char[33] m_szTag; // offset 0x6D8, size 0x21, align 1
    char _pad_06F9[0x7]; // offset 0x6F9
};
