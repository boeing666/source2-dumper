#pragma once

class CitadelItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13EC]; // offset 0x0
    EModTier_t m_iItemTier; // offset 0x13EC, size 0x1, align 1
    char _pad_13ED[0x3]; // offset 0x13ED
    int32 m_nShopPriceOverride; // offset 0x13F0, size 0x4, align 4
    bool m_bWarnIfNoAffectedAbilities; // offset 0x13F4, size 0x1, align 1
    bool m_bShowTextDescription; // offset 0x13F5, size 0x1, align 1
    char _pad_13F6[0x2]; // offset 0x13F6
    EShopFilters_t m_eDisableShopFilters; // offset 0x13F8, size 0x8, align 8
    EShopFilters_t m_eAdditionalShopFilters; // offset 0x1400, size 0x8, align 8
    EShopFilters_t m_eGeneratedShopFilters; // offset 0x1408, size 0x8, align 8
    EAbilityRequirements_t m_eAbilityRequirements; // offset 0x1410, size 0x2, align 2
    char _pad_1412[0x6]; // offset 0x1412
    CPanoramaImageName m_strShopIconLarge; // offset 0x1418, size 0x10, align 8
    CUtlString m_strLocSearchString; // offset 0x1428, size 0x8, align 8
    int32 m_nShopVersion; // offset 0x1430, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_1434[0x4]; // offset 0x1434
    CUtlString m_strDisableItemTarget; // offset 0x1438, size 0x8, align 8
    CUtlString m_strOverrideDisplayNameLocToken; // offset 0x1440, size 0x8, align 8
    bool m_bDisabledForBots; // offset 0x1448, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowItemStacking; // offset 0x1449, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_144A[0x6]; // offset 0x144A
    CorruptedItemInfo_t m_CorruptedItemInfo; // offset 0x1450, size 0x60, align 8 | MPropertyFriendlyName
    char _pad_14B0[0x18]; // offset 0x14B0
    CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // offset 0x14C8, size 0x18, align 8
    CUtlVector< CUtlString > m_vecDisabledOnHeroes; // offset 0x14E0, size 0x18, align 8 | MPropertyCustomFGDType
};
