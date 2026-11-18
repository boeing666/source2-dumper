#pragma once

class CDOTALabyrinthBlessingsMap  // sizeof 0x1B8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton MVDataPreviewWidget MCustomFGDMetadata}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strBlessingEventAction; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x8]; // offset 0x10
    CUtlString m_strCurrencyGrantEventAction; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    char _pad_0020[0x8]; // offset 0x20
    CUtlString m_strCurrencySpendEventAction; // offset 0x28, size 0x8, align 8 | MPropertyDescription
    char _pad_0030[0x4]; // offset 0x30
    BlessingTypeID_t m_nNextBlessingTypeID; // offset 0x34, size 0x4, align 255 | MPropertyAttributeEditor
    BlessingID_t m_nNextBlessingID; // offset 0x38, size 0x4, align 255 | MPropertyAttributeEditor
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_UnlockHeroBlessingType; // offset 0x40, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0048[0x8]; // offset 0x48
    CUtlVector< CUtlString > m_vecHeroNames; // offset 0x50, size 0x18, align 8
    char _pad_0068[0x18]; // offset 0x68
    int32 m_nNumStartingHeroesUnlocked; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    CUtlString m_UnlockLegacyHeroBlessingType; // offset 0x88, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0090[0x8]; // offset 0x90
    CUtlVector< CUtlString > m_vecLegacyHeroNames; // offset 0x98, size 0x18, align 8
    char _pad_00B0[0x18]; // offset 0xB0
    int32 m_nNumStartingLegacyHeroesUnlocked; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x4]; // offset 0xCC
    CUtlDict< BlessingType_t > m_mapBlessingTypes; // offset 0xD0, size 0x28, align 8 | MVDataPromoteField
    char _pad_00F8[0x40]; // offset 0xF8
    CUtlDict< Blessing_t > m_mapBlessings; // offset 0x138, size 0x28, align 8 | MVDataPromoteField
    char _pad_0160[0x28]; // offset 0x160
    CUtlVector< BlessingPath_t > m_vecPaths; // offset 0x188, size 0x18, align 8 | MVDataPromoteField
    char _pad_01A0[0x18]; // offset 0x1A0
};
