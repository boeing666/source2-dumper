#pragma once

class CitadelItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A4]; // offset 0x0
    EModTier_t m_iItemTier; // offset 0x13A4, size 0x1, align 1
    char _pad_13A5[0x3]; // offset 0x13A5
    int32 m_nShopPriceOverride; // offset 0x13A8, size 0x4, align 4
    bool m_bWarnIfNoAffectedAbilities; // offset 0x13AC, size 0x1, align 1
    bool m_bShowTextDescription; // offset 0x13AD, size 0x1, align 1
    char _pad_13AE[0x2]; // offset 0x13AE
    EShopFilters_t m_eDisableShopFilters; // offset 0x13B0, size 0x8, align 8
    EShopFilters_t m_eAdditionalShopFilters; // offset 0x13B8, size 0x8, align 8
    EShopFilters_t m_eGeneratedShopFilters; // offset 0x13C0, size 0x8, align 8
    EAbilityRequirements_t m_eAbilityRequirements; // offset 0x13C8, size 0x2, align 2
    char _pad_13CA[0x6]; // offset 0x13CA
    CPanoramaImageName m_strShopIconLarge; // offset 0x13D0, size 0x10, align 8
    CUtlString m_strLocSearchString; // offset 0x13E0, size 0x8, align 8
    int32 m_nShopVersion; // offset 0x13E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_13EC[0x4]; // offset 0x13EC
    CUtlString m_strDisableItemTarget; // offset 0x13F0, size 0x8, align 8
    CUtlString m_strOverrideDisplayNameLocToken; // offset 0x13F8, size 0x8, align 8
    bool m_bDisabledForBots; // offset 0x1400, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAllowItemStacking; // offset 0x1401, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1402[0x6]; // offset 0x1402
    CorruptedItemInfo_t m_CorruptedItemInfo; // offset 0x1408, size 0x60, align 8 | MPropertyFriendlyName
    char _pad_1468[0x18]; // offset 0x1468
    CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // offset 0x1480, size 0x18, align 8
    CUtlVector< CUtlString > m_vecDisabledOnHeroes; // offset 0x1498, size 0x18, align 8 | MPropertyCustomFGDType
};
