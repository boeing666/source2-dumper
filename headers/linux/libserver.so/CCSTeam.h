#pragma once

class CCSTeam : public CTeam /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x840]; // offset 0x0
    int32 m_nLastRecievedShorthandedRoundBonus; // offset 0x840, size 0x4, align 4
    int32 m_nShorthandedRoundBonusStartRound; // offset 0x844, size 0x4, align 4
    bool m_bSurrendered; // offset 0x848, size 0x1, align 1
    char[512] m_szTeamMatchStat; // offset 0x849, size 0x200, align 1
    char _pad_0A49[0x3]; // offset 0xA49
    int32 m_numMapVictories; // offset 0xA4C, size 0x4, align 4
    int32 m_scoreFirstHalf; // offset 0xA50, size 0x4, align 4
    int32 m_scoreSecondHalf; // offset 0xA54, size 0x4, align 4
    int32 m_scoreOvertime; // offset 0xA58, size 0x4, align 4
    char[129] m_szClanTeamname; // offset 0xA5C, size 0x81, align 1
    char _pad_0ADD[0x3]; // offset 0xADD
    uint32 m_iClanID; // offset 0xAE0, size 0x4, align 4
    char[8] m_szTeamFlagImage; // offset 0xAE4, size 0x8, align 1
    char[8] m_szTeamLogoImage; // offset 0xAEC, size 0x8, align 1
    float32 m_flNextResourceTime; // offset 0xAF4, size 0x4, align 4
    int32 m_iLastUpdateSentAt; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x4]; // offset 0xAFC
};
