#pragma once

class CDOTA_UnitInventory  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< sSharedCooldownInfo > m_SharedCooldownList; // offset 0x8, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hItems; // offset 0x20, size 0x68, align 4
    bool[27] m_bItemQueried; // offset 0x88, size 0x1B, align 1
    char _pad_00A3[0x1]; // offset 0xA3
    int32 m_iParity; // offset 0xA4, size 0x4, align 4
    CHandle< CBaseEntity > m_hInventoryParent; // offset 0xA8, size 0x4, align 4
    bool m_bIsActive; // offset 0xAC, size 0x1, align 1
    bool m_bStashEnabled; // offset 0xAD, size 0x1, align 1
    char _pad_00AE[0x2]; // offset 0xAE
    CHandle< CBaseEntity > m_hTransientCastItem; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x44]; // offset 0xB4
};
