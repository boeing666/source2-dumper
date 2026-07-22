#pragma once

class C_DOTA_UnitInventory  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< sSharedCooldownInfo > m_SharedCooldownList; // offset 0x8, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hItems; // offset 0x20, size 0x68, align 4
    bool[27] m_bItemQueried; // offset 0x88, size 0x1B, align 1
    char _pad_00A3[0x1]; // offset 0xA3
    int32 m_iParity; // offset 0xA4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hInventoryParent; // offset 0xA8, size 0x4, align 4
    bool m_bIsActive; // offset 0xAC, size 0x1, align 1
    bool m_bStashEnabled; // offset 0xAD, size 0x1, align 1
    char _pad_00AE[0x2]; // offset 0xAE
    CHandle< C_BaseEntity > m_hTransientCastItem; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x1C]; // offset 0xB4
    bool m_bSendChangedMsg; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    int32 m_nAcknowledgedParity; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x18]; // offset 0xD8
};
