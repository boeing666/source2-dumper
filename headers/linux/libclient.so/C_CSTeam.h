#pragma once

class C_CSTeam : public C_Team /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x835]; // offset 0x0
    char[512] m_szTeamMatchStat; // offset 0x835, size 0x200, align 1
    char _pad_0A35[0x3]; // offset 0xA35
    int32 m_numMapVictories; // offset 0xA38, size 0x4, align 4
    bool m_bSurrendered; // offset 0xA3C, size 0x1, align 1
    char _pad_0A3D[0x3]; // offset 0xA3D
    int32 m_scoreFirstHalf; // offset 0xA40, size 0x4, align 4
    int32 m_scoreSecondHalf; // offset 0xA44, size 0x4, align 4
    int32 m_scoreOvertime; // offset 0xA48, size 0x4, align 4
    char[129] m_szClanTeamname; // offset 0xA4C, size 0x81, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
    uint32 m_iClanID; // offset 0xAD0, size 0x4, align 4
    char[8] m_szTeamFlagImage; // offset 0xAD4, size 0x8, align 1
    char[8] m_szTeamLogoImage; // offset 0xADC, size 0x8, align 1
    char _pad_0AE4[0x4]; // offset 0xAE4
};
