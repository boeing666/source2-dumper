#pragma once

class CDOTA_Item_Tombstone_Drop : public C_DOTA_Item_Physical /*0x0*/  // sizeof 0xE60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE58]; // offset 0x0
    int32 m_iTempViewer; // offset 0xE58, size 0x4, align 4
    int32 m_iTeam; // offset 0xE5C, size 0x4, align 4
};
