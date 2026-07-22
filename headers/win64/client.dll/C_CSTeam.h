#pragma once

class C_CSTeam : public C_Team /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    char[512] m_szTeamMatchStat; // offset 0x6B8, size 0x200, align 1
    int32 m_numMapVictories; // offset 0x8B8, size 0x4, align 4
    bool m_bSurrendered; // offset 0x8BC, size 0x1, align 1
    char _pad_08BD[0x3]; // offset 0x8BD
    int32 m_scoreFirstHalf; // offset 0x8C0, size 0x4, align 4
    int32 m_scoreSecondHalf; // offset 0x8C4, size 0x4, align 4
    int32 m_scoreOvertime; // offset 0x8C8, size 0x4, align 4
    char[129] m_szClanTeamname; // offset 0x8CC, size 0x81, align 1
    char _pad_094D[0x3]; // offset 0x94D
    uint32 m_iClanID; // offset 0x950, size 0x4, align 4
    char[8] m_szTeamFlagImage; // offset 0x954, size 0x8, align 1
    char[8] m_szTeamLogoImage; // offset 0x95C, size 0x8, align 1
    char _pad_0964[0x4]; // offset 0x964
};
