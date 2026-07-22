#pragma once

struct CDOTABattleReportHighlightCompareContext_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CMsgBattleReport_CompareContext m_eCompareContext; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    EHighlightScoreComparison m_eComparisonType; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    float32 m_flCompareValue; // offset 0x8, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
};
