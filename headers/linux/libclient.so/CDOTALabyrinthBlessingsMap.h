#pragma once

class CDOTALabyrinthBlessingsMap  // sizeof 0x198, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton MVDataPreviewWidget MCustomFGDMetadata}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strBlessingEventAction; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x8]; // offset 0x10
    BlessingTypeID_t m_nNextBlessingTypeID; // offset 0x18, size 0x4, align 255 | MPropertyAttributeEditor
    BlessingID_t m_nNextBlessingID; // offset 0x1C, size 0x4, align 255 | MPropertyAttributeEditor
    CUtlString m_UnlockHeroBlessingType; // offset 0x20, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0028[0x8]; // offset 0x28
    CUtlVector< CUtlString > m_vecHeroNames; // offset 0x30, size 0x18, align 8
    char _pad_0048[0x18]; // offset 0x48
    int32 m_nNumStartingHeroesUnlocked; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_UnlockLegacyHeroBlessingType; // offset 0x68, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0070[0x8]; // offset 0x70
    CUtlVector< CUtlString > m_vecLegacyHeroNames; // offset 0x78, size 0x18, align 8
    char _pad_0090[0x18]; // offset 0x90
    int32 m_nNumStartingLegacyHeroesUnlocked; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    CUtlDict< BlessingType_t > m_mapBlessingTypes; // offset 0xB0, size 0x28, align 8 | MVDataPromoteField
    char _pad_00D8[0x40]; // offset 0xD8
    CUtlDict< Blessing_t > m_mapBlessings; // offset 0x118, size 0x28, align 8 | MVDataPromoteField
    char _pad_0140[0x28]; // offset 0x140
    CUtlVector< BlessingPath_t > m_vecPaths; // offset 0x168, size 0x18, align 8 | MVDataPromoteField
    char _pad_0180[0x18]; // offset 0x180
};
