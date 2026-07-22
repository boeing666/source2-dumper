#pragma once

class CQuickBuyController  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    InventoryQuickBuyState_t m_quickBuyState; // offset 0x10, size 0xD8, align 255
    bool m_bBuybackProtectionEnabled; // offset 0xE8, size 0x1, align 1
    bool m_bAutoMarkForBuy; // offset 0xE9, size 0x1, align 1
    char _pad_00EA[0x6]; // offset 0xEA
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecControlledUnits; // offset 0xF0, size 0x18, align 8
    char _pad_0108[0x18]; // offset 0x108
    bool m_bQuickBuyIgnoredStateDirty; // offset 0x120, size 0x1, align 1
    char _pad_0121[0x3]; // offset 0x121
    int32 m_nSuggestItemIdx; // offset 0x124, size 0x4, align 4
    char _pad_0128[0x18]; // offset 0x128
    bool m_bIsLocalPlayer; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x7]; // offset 0x141
};
