#pragma once

class CSimpleAssetTypeInfo  // sizeof 0xE0, align 0x8 [vtable] (toolutils2) {MGetKV3ClassDefaults}
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
    bool m_bHideTypeByDefault; // offset 0xC8, size 0x1, align 1
    bool m_bCannotBeShown; // offset 0xC9, size 0x1, align 1
    bool m_bIsNontrivialChildAssetType; // offset 0xCA, size 0x1, align 1
    bool m_bSuppressFullFingerprintCalculation; // offset 0xCB, size 0x1, align 1
    bool m_bIgnoreCompiledState; // offset 0xCC, size 0x1, align 1
    bool m_bContentFileIsText; // offset 0xCD, size 0x1, align 1
    bool m_bPrefersLivePreview; // offset 0xCE, size 0x1, align 1
    bool m_bPresentInGameTree; // offset 0xCF, size 0x1, align 1
    bool m_bShouldCompileErrorFallbackToDisk; // offset 0xD0, size 0x1, align 1
    bool m_bUnrecognizedReferencesAreErrors; // offset 0xD1, size 0x1, align 1
    char _pad_00D2[0x2]; // offset 0xD2
    int32 m_nAssetTypeVersion; // offset 0xD4, size 0x4, align 4
    CUtlString m_Test_InjectSearchable; // offset 0xD8, size 0x8, align 8
};
