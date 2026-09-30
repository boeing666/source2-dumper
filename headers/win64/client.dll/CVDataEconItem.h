#pragma once

class CVDataEconItem  // sizeof 0x198, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    uint8_t m_bFlipViewModel : 1; // offset 0x0
    uint8_t m_bHidden : 1; // offset 0x0
    uint8_t m_bOverrideAttackAttachments : 1; // offset 0x0
    uint8_t m_bPublicItem : 1; // offset 0x0
    uint8_t m_bShowItemAssetLootList : 1; // offset 0x0
    uint8_t m_bHideQuantity : 1; // offset 0x0
    uint8_t m_bPreventGifting : 1; // offset 0x0
    uint8_t m_bAlwaysSendToServers : 1; // offset 0x0
    uint8_t m_bShouldHideTradeCraftDelete : 1; // offset 0x0
    uint8_t m_bRemovePriceBlockFromStore : 1; // offset 0x0
    uint8_t m_bHasStoreCustomItemDetailsPanel : 1; // offset 0x0
    uint8_t m_bBaseItem : 1; // offset 0x0
    uint8_t m_bHideInPurchasePopup : 1; // offset 0x0
    uint8_t m_bHideInInventory : 1; // offset 0x0
    uint8_t m_bHideInStore : 1; // offset 0x0
    char _pad_0001[0x7]; // offset 0x1
    item_definition_index_t m_nDefIndex; // offset 0x8, size 0x4, align 255
    item_definition_index_t m_nAssociatedItemDefIndex; // offset 0xC, size 0x4, align 255
    item_steam_cache_version_t m_unSteamCacheVersion; // offset 0x10, size 0x1, align 255
    uint8 m_nItemRarity; // offset 0x11, size 0x1, align 1
    uint8 m_nItemQuality; // offset 0x12, size 0x1, align 1
    uint8 m_nForcedItemQuality; // offset 0x13, size 0x1, align 1
    uint8 m_nDefaultDropQuantity; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    CUtlString m_strItemBaseName; // offset 0x18, size 0x8, align 8
    CUtlString m_strItemTypeName; // offset 0x20, size 0x8, align 8
    CUtlString m_strItemDesc; // offset 0x28, size 0x8, align 8
    uint32 m_rtExpiration; // offset 0x30, size 0x4, align 4
    item_definition_index_t m_unOnExpirationTransmuteToItem; // offset 0x34, size 0x4, align 255
    uint32 m_rtDefCreation; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_strEventID; // offset 0x40, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strInventoryModel; // offset 0x48, size 0xE0, align 8
    CPanoramaImageName m_strInventoryImage; // offset 0x128, size 0x10, align 8
    CPanoramaImageName m_strInventoryOverlayImage; // offset 0x138, size 0x10, align 8
    CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > > m_vecBaseDisplayModels; // offset 0x148, size 0x18, align 8
    CUtlString m_strItemClassname; // offset 0x160, size 0x8, align 8
    char _pad_0168[0xA]; // offset 0x168
    uint8 m_unPurchaseLimitedQuantity; // offset 0x172, size 0x1, align 1
    char _pad_0173[0x5]; // offset 0x173
    KeyValues3 m_kvDynamicAttributes; // offset 0x178, size 0x10, align 8
    KeyValues3 m_kvStaticAttributes; // offset 0x188, size 0x10, align 8
};
