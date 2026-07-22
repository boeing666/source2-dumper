#pragma once

class C_EconItemView : public IEconItemInterface /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    item_definition_index_t m_iItemDefinitionIndex; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    int32 m_iEntityQuality; // offset 0xC, size 0x4, align 4 | MNetworkEnable
    uint32 m_iEntityLevel; // offset 0x10, size 0x4, align 4 | MNetworkEnable
    char _pad_0014[0x4]; // offset 0x14
    itemid_t m_iItemID; // offset 0x18, size 0x8, align 255 | MNetworkEnable
    uint32 m_iAccountID; // offset 0x20, size 0x4, align 4 | MNetworkEnable
    uint32 m_iInventoryPosition; // offset 0x24, size 0x4, align 4 | MNetworkEnable
    char _pad_0028[0x8]; // offset 0x28
    bool m_bInitialized; // offset 0x30, size 0x1, align 1 | MNetworkEnable
    style_index_t m_nOverrideStyle; // offset 0x31, size 0x1, align 255 | MNetworkEnable
    bool m_bIsStoreItem; // offset 0x32, size 0x1, align 1
    bool m_bIsTradeItem; // offset 0x33, size 0x1, align 1
    bool m_bHasComputedAttachedParticles; // offset 0x34, size 0x1, align 1
    bool m_bHasAttachedParticles; // offset 0x35, size 0x1, align 1
    char _pad_0036[0x2]; // offset 0x36
    int32 m_iEntityQuantity; // offset 0x38, size 0x4, align 4
    uint8 m_unClientFlags; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    eEconItemOrigin m_unOverrideOrigin; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x14]; // offset 0x44
    CAttributeList m_AttributeList; // offset 0x58, size 0x78, align 255 | MNetworkEnable
    char _pad_00D0[0x20]; // offset 0xD0
};
