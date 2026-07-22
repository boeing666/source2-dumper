#pragma once

class C_EconItemView : public IEconItemInterface /*0x0*/  // sizeof 0x1378, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x70]; // offset 0x0
    bool m_bInventoryImageRgbaRequested; // offset 0x70, size 0x1, align 1
    bool m_bInventoryImageTriedCache; // offset 0x71, size 0x1, align 1
    char _pad_0072[0x1E]; // offset 0x72
    int32 m_nInventoryImageRgbaWidth; // offset 0x90, size 0x4, align 4
    int32 m_nInventoryImageRgbaHeight; // offset 0x94, size 0x4, align 4
    char[4096] m_szCurrentLoadCachedFileName; // offset 0x98, size 0x1000, align 1
    char _pad_1098[0x28]; // offset 0x1098
    bool m_bRestoreCustomMaterialAfterPrecache; // offset 0x10C0, size 0x1, align 1
    char _pad_10C1[0x1]; // offset 0x10C1
    uint16 m_iItemDefinitionIndex; // offset 0x10C2, size 0x2, align 2
    int32 m_iEntityQuality; // offset 0x10C4, size 0x4, align 4
    uint32 m_iEntityLevel; // offset 0x10C8, size 0x4, align 4
    char _pad_10CC[0x4]; // offset 0x10CC
    uint64 m_iItemID; // offset 0x10D0, size 0x8, align 8
    uint32 m_iItemIDHigh; // offset 0x10D8, size 0x4, align 4
    uint32 m_iItemIDLow; // offset 0x10DC, size 0x4, align 4
    uint32 m_iAccountID; // offset 0x10E0, size 0x4, align 4
    uint32 m_iInventoryPosition; // offset 0x10E4, size 0x4, align 4
    char _pad_10E8[0x8]; // offset 0x10E8
    bool m_bInitialized; // offset 0x10F0, size 0x1, align 1
    bool m_bDisallowSOC; // offset 0x10F1, size 0x1, align 1
    bool m_bIsStoreItem; // offset 0x10F2, size 0x1, align 1
    bool m_bIsTradeItem; // offset 0x10F3, size 0x1, align 1
    int32 m_iEntityQuantity; // offset 0x10F4, size 0x4, align 4
    int32 m_iRarityOverride; // offset 0x10F8, size 0x4, align 4
    int32 m_iQualityOverride; // offset 0x10FC, size 0x4, align 4
    int32 m_iOriginOverride; // offset 0x1100, size 0x4, align 4
    uint8 m_ubStyleOverride; // offset 0x1104, size 0x1, align 1
    uint8 m_unClientFlags; // offset 0x1105, size 0x1, align 1
    char _pad_1106[0xA]; // offset 0x1106
    CAttributeList m_AttributeList; // offset 0x1110, size 0x78, align 255
    CAttributeList m_NetworkedDynamicAttributes; // offset 0x1188, size 0x78, align 255
    char[161] m_szCustomName; // offset 0x1200, size 0xA1, align 1
    char[161] m_szCustomNameOverride; // offset 0x12A1, size 0xA1, align 1
    char _pad_1342[0x2E]; // offset 0x1342
    bool m_bInitializedTags; // offset 0x1370, size 0x1, align 1
    char _pad_1371[0x7]; // offset 0x1371
};
