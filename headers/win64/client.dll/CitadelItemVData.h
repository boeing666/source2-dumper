#pragma once

class CitadelItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x181C]; // offset 0x0
    EModTier_t m_iItemTier; // offset 0x181C, size 0x1, align 1
    int8 m_nUpgradeSlotCost; // offset 0x181D, size 0x1, align 1
    bool m_bWarnIfNoAffectedAbilities; // offset 0x181E, size 0x1, align 1
    bool m_bShowTextDescription; // offset 0x181F, size 0x1, align 1
    EShopFilters_t m_eShopFilters; // offset 0x1820, size 0x2, align 2
    EAbilityRequirements_t m_eAbilityRequirements; // offset 0x1822, size 0x2, align 2
    char _pad_1824[0x4]; // offset 0x1824
    CPanoramaImageName m_strShopIconLarge; // offset 0x1828, size 0x10, align 8
    CUtlString m_strLocSearchString; // offset 0x1838, size 0x8, align 8
    CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // offset 0x1840, size 0x18, align 8 | MPropertyFriendlyName
    CUtlString m_sCustomTooltipID; // offset 0x1858, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bCustomTooltipInteractive; // offset 0x1860, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDisabledForBots; // offset 0x1861, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1862[0x6]; // offset 0x1862
    CUtlString m_sCustomStackLabel; // offset 0x1868, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_1870[0x18]; // offset 0x1870
    CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // offset 0x1888, size 0x18, align 8
    CUtlVector< CUtlString > m_vecDisabledOnHeroes; // offset 0x18A0, size 0x18, align 8 | MPropertyCustomFGDType
};
