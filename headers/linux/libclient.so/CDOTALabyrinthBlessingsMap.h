#pragma once

class CDOTALabyrinthBlessingsMap  // sizeof 0x1A8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton MVDataPreviewWidget MCustomFGDMetadata}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strBlessingEventAction; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x8]; // offset 0x10
    CUtlString m_strCurrencyPeriodicResource; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    char _pad_0020[0x4]; // offset 0x20
    BlessingTypeID_t m_nNextBlessingTypeID; // offset 0x24, size 0x4, align 255 | MPropertyAttributeEditor
    BlessingID_t m_nNextBlessingID; // offset 0x28, size 0x4, align 255 | MPropertyAttributeEditor
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_UnlockHeroBlessingType; // offset 0x30, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0038[0x8]; // offset 0x38
    CUtlVector< CUtlString > m_vecHeroNames; // offset 0x40, size 0x18, align 8
    char _pad_0058[0x18]; // offset 0x58
    int32 m_nNumStartingHeroesUnlocked; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
    CUtlString m_UnlockLegacyHeroBlessingType; // offset 0x78, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0080[0x8]; // offset 0x80
    CUtlVector< CUtlString > m_vecLegacyHeroNames; // offset 0x88, size 0x18, align 8
    char _pad_00A0[0x18]; // offset 0xA0
    int32 m_nNumStartingLegacyHeroesUnlocked; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
    CUtlDict< BlessingType_t > m_mapBlessingTypes; // offset 0xC0, size 0x28, align 8 | MVDataPromoteField
    char _pad_00E8[0x40]; // offset 0xE8
    CUtlDict< Blessing_t > m_mapBlessings; // offset 0x128, size 0x28, align 8 | MVDataPromoteField
    char _pad_0150[0x28]; // offset 0x150
    CUtlVector< BlessingPath_t > m_vecPaths; // offset 0x178, size 0x18, align 8 | MVDataPromoteField
    char _pad_0190[0x18]; // offset 0x190
};
