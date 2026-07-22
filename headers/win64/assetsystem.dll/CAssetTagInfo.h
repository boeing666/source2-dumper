#pragma once

class CAssetTagInfo  // sizeof 0x1E0, align 0x8 (toolutils2) {MGetKV3ClassDefaults MVDataRoot MVDataOutlinerDetailExpr MVDataOutlinerIconExpr}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlString m_TagName; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    CUtlString m_TagDescription; // offset 0x38, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor
    CUtlString m_TagIcon; // offset 0x40, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor
    Color m_TagColor; // offset 0x48, size 0x4, align 1 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    CUtlVector< CUtlString > m_TagAliases; // offset 0x50, size 0x18, align 8 | MPropertyDescription MPropertyAutoExpandSelf
    CUtlString m_ThumbnailOverlayImage; // offset 0x68, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor
    bool m_bTagIndicatesRejectedAsset; // offset 0x70, size 0x1, align 1 | MPropertyDescription
    bool m_bTagHidesAssetByDefault; // offset 0x71, size 0x1, align 1 | MPropertyDescription
    char _pad_0072[0x6]; // offset 0x72
    CUtlString m_RestrictAutoTagToAssetType; // offset 0x78, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_AutoFilterTag; // offset 0x80, size 0x8, align 8 | MPropertyDescription MPropertyAutoExpandSelf MPropertySuppressExpr
    AutoTagVDataCondition_t m_AutoDataTag; // offset 0x88, size 0x158, align 8 | MPropertyDescription MPropertyAutoExpandSelf MPropertySuppressExpr
};
