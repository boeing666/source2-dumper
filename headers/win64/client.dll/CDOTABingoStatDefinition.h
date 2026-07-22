#pragma once

class CDOTABingoStatDefinition  // sizeof 0x58, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strExclusiveString; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    float32 m_fStatAverage; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    float32 m_fStatStdDev; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strHeroAdjective; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    bool m_bNegativeHeroAdjective; // offset 0x20, size 0x1, align 1 | MPropertyDescription
    char _pad_0021[0x3]; // offset 0x21
    int32 m_nMinLeaguePhase; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    int32 m_nMaxLeaguePhase; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    float32 m_fPlayoffsStatAverage; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    float32 m_fPlayoffsStatStdDev; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    float32 m_fMainEventStatAverage; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    float32 m_fMainEventStatStdDev; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_sLocName; // offset 0x40, size 0x8, align 8
    CUtlString m_sLocTooltip; // offset 0x48, size 0x8, align 8
    char _pad_0050[0x8]; // offset 0x50
};
