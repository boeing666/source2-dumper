#pragma once

class CAssetWarningCheck  // sizeof 0x68, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_AssetType; // offset 0x0, size 0x8, align 8
    CBufferString m_RequireSearchableIntKey; // offset 0x8, size 0x10, align 8
    int32 m_RequireSearchableIntValue; // offset 0x18, size 0x4, align 4
    bool m_bOnlyWarnIfGameFilePresent; // offset 0x1C, size 0x1, align 1
    bool m_bOnlyWarnIfContentFilePresent; // offset 0x1D, size 0x1, align 1
    bool m_bOnlyWarnAddons; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
    CUtlVector< CUtlString > m_ExcludeAddonNames; // offset 0x20, size 0x18, align 8
    CUtlString m_FixDescription; // offset 0x38, size 0x8, align 8
    AssetWarningFixType_t m_FixType; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x24]; // offset 0x44
};
