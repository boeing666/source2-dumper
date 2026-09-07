#pragma once

class CRankedSeasonDefinition  // sizeof 0xF0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strSeasonLocName; // offset 0x8, size 0x8, align 8
    ECitadelRankedType m_eRankedType; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< CRankedSeasonIntervalDefinition > m_vecIntervals; // offset 0x18, size 0x18, align 8
    CUtlVector< uint8 > m_vecValidPartySizes; // offset 0x30, size 0x18, align 8
    bool m_bCanPartyInCalibration; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x7F]; // offset 0x49
    uint32 m_unMinWins; // offset 0xC8, size 0x4, align 4
    uint32 m_unMinHeroWins; // offset 0xCC, size 0x4, align 4
    uint32 m_unMinHeroUnlocks; // offset 0xD0, size 0x4, align 4
    uint32 m_unCalibrationMatches; // offset 0xD4, size 0x4, align 4
    uint32 m_unBaseWinLossPointGrant; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x14]; // offset 0xDC
};
