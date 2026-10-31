#pragma once

class CitadelItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1084]; // offset 0x0
    EModTier_t m_iItemTier; // offset 0x1084, size 0x1, align 1
    char _pad_1085[0x3]; // offset 0x1085
    int32 m_nShopPriceOverride; // offset 0x1088, size 0x4, align 4
    bool m_bWarnIfNoAffectedAbilities; // offset 0x108C, size 0x1, align 1
    bool m_bShowTextDescription; // offset 0x108D, size 0x1, align 1
    char _pad_108E[0x2]; // offset 0x108E
    EShopFilters_t m_eDisableShopFilters; // offset 0x1090, size 0x8, align 8
    EShopFilters_t m_eAdditionalShopFilters; // offset 0x1098, size 0x8, align 8
    EShopFilters_t m_eGeneratedShopFilters; // offset 0x10A0, size 0x8, align 8
    EAbilityRequirements_t m_eAbilityRequirements; // offset 0x10A8, size 0x2, align 2
    char _pad_10AA[0x6]; // offset 0x10AA
    CPanoramaImageName m_strShopIconLarge; // offset 0x10B0, size 0x10, align 8
    CUtlString m_strLocSearchString; // offset 0x10C0, size 0x8, align 8
    int32 m_nShopVersion; // offset 0x10C8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_10CC[0x4]; // offset 0x10CC
    CUtlString m_strDisableItemTarget; // offset 0x10D0, size 0x8, align 8
    CUtlString m_strOverrideDisplayNameLocToken; // offset 0x10D8, size 0x8, align 8
    bool m_bDisabledForBots; // offset 0x10E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowItemStacking; // offset 0x10E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_10E2[0x6]; // offset 0x10E2
    CorruptedItemInfo_t m_CorruptedItemInfo; // offset 0x10E8, size 0x60, align 8 | MPropertyFriendlyName
    char _pad_1148[0x18]; // offset 0x1148
    CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // offset 0x1160, size 0x18, align 8
    CUtlVector< CUtlString > m_vecDisabledOnHeroes; // offset 0x1178, size 0x18, align 8 | MPropertyCustomFGDType
};
