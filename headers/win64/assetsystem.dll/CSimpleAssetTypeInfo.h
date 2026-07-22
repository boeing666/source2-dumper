#pragma once

class CSimpleAssetTypeInfo  // sizeof 0x100, align 0x8 [vtable] (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_FriendlyName; // offset 0x10, size 0x8, align 8
    CUtlString m_Ext; // offset 0x18, size 0x8, align 8
    CUtlString m_IconLg; // offset 0x20, size 0x8, align 8
    CUtlString m_IconSm; // offset 0x28, size 0x8, align 8
    CUtlVector< CUtlString > m_SuppressSubstrings; // offset 0x30, size 0x18, align 8
    CUtlVector< CUtlString > m_AdditionalExtensions; // offset 0x48, size 0x18, align 8
    CUtlVector< AssetEngineCommand_t > m_EngineCommands; // offset 0x60, size 0x18, align 8
    CUtlVector< CUtlString > m_LimitToMods; // offset 0x78, size 0x18, align 8
    CUtlVector< CUtlString > m_ExcludeFromMods; // offset 0x90, size 0x18, align 8
    CUtlVector< CUtlString > m_HideForRetailMods; // offset 0xA8, size 0x18, align 8
    CUtlString m_PreviewThumbnailOverlayIcon; // offset 0xC0, size 0x8, align 8
    bool m_bErrorOnUnrecognizedOutboundRefs; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x7]; // offset 0xC9
    CUtlVector< CUtlString > m_UnrecognizedOutboundRefsErrorTypeExceptions; // offset 0xD0, size 0x18, align 8
    bool m_bHideTypeByDefault; // offset 0xE8, size 0x1, align 1
    bool m_bCannotBeShown; // offset 0xE9, size 0x1, align 1
    bool m_bIsNontrivialChildAssetType; // offset 0xEA, size 0x1, align 1
    bool m_bSuppressFullFingerprintCalculation; // offset 0xEB, size 0x1, align 1
    bool m_bIgnoreCompiledState; // offset 0xEC, size 0x1, align 1
    bool m_bContentFileIsText; // offset 0xED, size 0x1, align 1
    bool m_bPrefersLivePreview; // offset 0xEE, size 0x1, align 1
    bool m_bPresentInGameTree; // offset 0xEF, size 0x1, align 1
    bool m_bShouldCompileErrorFallbackToDisk; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    int32 m_nAssetTypeVersion; // offset 0xF4, size 0x4, align 4
    CUtlString m_Test_InjectSearchable; // offset 0xF8, size 0x8, align 8
};
