#pragma once

class CQuickBuyController  // sizeof 0x188, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    InventoryQuickBuyState_t m_quickBuyState; // offset 0x10, size 0xD0, align 255
    bool m_bBuybackProtectionEnabled; // offset 0xE0, size 0x1, align 1
    bool m_bAutoMarkForBuy; // offset 0xE1, size 0x1, align 1
    char _pad_00E2[0x6]; // offset 0xE2
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecControlledUnits; // offset 0xE8, size 0x18, align 8
    char _pad_0100[0x30]; // offset 0x100
    int32 m_nNextOrder; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x34]; // offset 0x134
    bool m_bQuickBuyIgnoredStateDirty; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x3]; // offset 0x169
    int32 m_nSuggestItemIdx; // offset 0x16C, size 0x4, align 4
    char _pad_0170[0x18]; // offset 0x170
};
