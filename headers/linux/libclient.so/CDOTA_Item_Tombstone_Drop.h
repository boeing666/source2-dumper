#pragma once

class CDOTA_Item_Tombstone_Drop : public C_DOTA_Item_Physical /*0x0*/  // sizeof 0xDF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF0]; // offset 0x0
    int32 m_iTempViewer; // offset 0xDF0, size 0x4, align 4
    int32 m_iTeam; // offset 0xDF4, size 0x4, align 4
};
