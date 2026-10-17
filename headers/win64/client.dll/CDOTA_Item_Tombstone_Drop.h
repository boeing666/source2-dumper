#pragma once

class CDOTA_Item_Tombstone_Drop : public C_DOTA_Item_Physical /*0x0*/  // sizeof 0xC78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC70]; // offset 0x0
    int32 m_iTempViewer; // offset 0xC70, size 0x4, align 4
    int32 m_iTeam; // offset 0xC74, size 0x4, align 4
};
