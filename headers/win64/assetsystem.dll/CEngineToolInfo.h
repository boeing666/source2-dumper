#pragma once

class CEngineToolInfo : public CBaseToolInfo /*0x0*/  // sizeof 0x88, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_Library; // offset 0x20, size 0x8, align 8
    CUtlString m_InterfaceName; // offset 0x28, size 0x8, align 8
    bool m_bShowInRevisionSubMenu; // offset 0x30, size 0x1, align 1
    bool m_bIsSecondaryTool; // offset 0x31, size 0x1, align 1
    bool m_bDoNotWarnAboutLargeAssetBatches; // offset 0x32, size 0x1, align 1
    bool m_bIsWorkshopManagerTool; // offset 0x33, size 0x1, align 1
    bool m_bIsWorkshopItemTool; // offset 0x34, size 0x1, align 1
    bool m_bCanHighlightSubassets; // offset 0x35, size 0x1, align 1
    char _pad_0036[0x2]; // offset 0x36
    CUtlVector< CUtlString > m_AssetTypes; // offset 0x38, size 0x18, align 8
    CUtlVector< CUtlString > m_LimitToMods; // offset 0x50, size 0x18, align 8
    CUtlVector< CUtlString > m_ExcludeFromMods; // offset 0x68, size 0x18, align 8
    char _pad_0080[0x8]; // offset 0x80
};
