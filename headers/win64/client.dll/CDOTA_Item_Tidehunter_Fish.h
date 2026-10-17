#pragma once

class CDOTA_Item_Tidehunter_Fish : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CHandle< C_BaseEntity > m_hPickupOwner; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
};
