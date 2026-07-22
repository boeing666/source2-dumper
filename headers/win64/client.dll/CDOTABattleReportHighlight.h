#pragma once

class CDOTABattleReportHighlight  // sizeof 0x80, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint16 m_nID; // offset 0x8, size 0x2, align 2 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    bool m_bEnabled; // offset 0xA, size 0x1, align 1 | MPropertyDescription
    char _pad_000B[0x1]; // offset 0xB
    CMsgBattleReport_HighlightType m_eHighlightType; // offset 0xC, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    CMsgBattleReport_HighlightCategory m_eHighlightCategory; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_sHeroName; // offset 0x18, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    CMsgBattleReport_HighlightRarity m_eHighlightRarity; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_sNameToken; // offset 0x28, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sFlavorToken; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    bool m_bTooltip; // offset 0x38, size 0x1, align 1 | MPropertyDescription
    char _pad_0039[0x7]; // offset 0x39
    CUtlString m_sTooltipLocString; // offset 0x40, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    EHighlightNumberFormat m_eFormat; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    CUtlVector< CMsgBattleReport_Role > m_vecRoles; // offset 0x50, size 0x18, align 8 | MPropertyDescription MPropertySuppressExpr
    CUtlVector< CDOTABattleReportHighlightTier_t > m_vecTiers; // offset 0x68, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
};
