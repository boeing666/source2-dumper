#pragma once

class CCSTeam : public CTeam /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x560]; // offset 0x0
    int32 m_nLastRecievedShorthandedRoundBonus; // offset 0x560, size 0x4, align 4
    int32 m_nShorthandedRoundBonusStartRound; // offset 0x564, size 0x4, align 4
    bool m_bSurrendered; // offset 0x568, size 0x1, align 1
    char[512] m_szTeamMatchStat; // offset 0x569, size 0x200, align 1
    char _pad_0769[0x3]; // offset 0x769
    int32 m_numMapVictories; // offset 0x76C, size 0x4, align 4
    int32 m_scoreFirstHalf; // offset 0x770, size 0x4, align 4
    int32 m_scoreSecondHalf; // offset 0x774, size 0x4, align 4
    int32 m_scoreOvertime; // offset 0x778, size 0x4, align 4
    char[129] m_szClanTeamname; // offset 0x77C, size 0x81, align 1
    char _pad_07FD[0x3]; // offset 0x7FD
    uint32 m_iClanID; // offset 0x800, size 0x4, align 4
    char[8] m_szTeamFlagImage; // offset 0x804, size 0x8, align 1
    char[8] m_szTeamLogoImage; // offset 0x80C, size 0x8, align 1
    float32 m_flNextResourceTime; // offset 0x814, size 0x4, align 4
    int32 m_iLastUpdateSentAt; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
};
