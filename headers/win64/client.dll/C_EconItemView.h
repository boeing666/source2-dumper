#pragma once

class C_EconItemView : public IEconItemInterface /*0x0*/  // sizeof 0x470, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    bool m_bInventoryImageRgbaRequested; // offset 0x60, size 0x1, align 1
    bool m_bInventoryImageTriedCache; // offset 0x61, size 0x1, align 1
    char _pad_0062[0x1E]; // offset 0x62
    int32 m_nInventoryImageRgbaWidth; // offset 0x80, size 0x4, align 4
    int32 m_nInventoryImageRgbaHeight; // offset 0x84, size 0x4, align 4
    char[260] m_szCurrentLoadCachedFileName; // offset 0x88, size 0x104, align 1
    char _pad_018C[0x2C]; // offset 0x18C
    bool m_bRestoreCustomMaterialAfterPrecache; // offset 0x1B8, size 0x1, align 1
    char _pad_01B9[0x1]; // offset 0x1B9
    uint16 m_iItemDefinitionIndex; // offset 0x1BA, size 0x2, align 2
    int32 m_iEntityQuality; // offset 0x1BC, size 0x4, align 4
    uint32 m_iEntityLevel; // offset 0x1C0, size 0x4, align 4
    char _pad_01C4[0x4]; // offset 0x1C4
    uint64 m_iItemID; // offset 0x1C8, size 0x8, align 8
    uint32 m_iItemIDHigh; // offset 0x1D0, size 0x4, align 4
    uint32 m_iItemIDLow; // offset 0x1D4, size 0x4, align 4
    uint32 m_iAccountID; // offset 0x1D8, size 0x4, align 4
    uint32 m_iInventoryPosition; // offset 0x1DC, size 0x4, align 4
    char _pad_01E0[0x8]; // offset 0x1E0
    bool m_bInitialized; // offset 0x1E8, size 0x1, align 1
    bool m_bDisallowSOC; // offset 0x1E9, size 0x1, align 1
    bool m_bIsStoreItem; // offset 0x1EA, size 0x1, align 1
    bool m_bIsTradeItem; // offset 0x1EB, size 0x1, align 1
    int32 m_iEntityQuantity; // offset 0x1EC, size 0x4, align 4
    int32 m_iRarityOverride; // offset 0x1F0, size 0x4, align 4
    int32 m_iQualityOverride; // offset 0x1F4, size 0x4, align 4
    int32 m_iOriginOverride; // offset 0x1F8, size 0x4, align 4
    uint8 m_ubStyleOverride; // offset 0x1FC, size 0x1, align 1
    uint8 m_unClientFlags; // offset 0x1FD, size 0x1, align 1
    char _pad_01FE[0xA]; // offset 0x1FE
    CAttributeList m_AttributeList; // offset 0x208, size 0x78, align 255
    CAttributeList m_NetworkedDynamicAttributes; // offset 0x280, size 0x78, align 255
    char[161] m_szCustomName; // offset 0x2F8, size 0xA1, align 1
    char[161] m_szCustomNameOverride; // offset 0x399, size 0xA1, align 1
    char _pad_043A[0x2E]; // offset 0x43A
    bool m_bInitializedTags; // offset 0x468, size 0x1, align 1
    char _pad_0469[0x7]; // offset 0x469
};
