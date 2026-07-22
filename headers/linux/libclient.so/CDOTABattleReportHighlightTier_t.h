#pragma once

struct CDOTABattleReportHighlightTier_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CMsgBattleReport_HighlightTier m_eTier; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CDOTABattleReportHighlightCompareContext_t > m_vecCompareContexts; // offset 0x8, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
};
