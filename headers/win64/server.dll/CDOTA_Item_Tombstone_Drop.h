#pragma once

class CDOTA_Item_Tombstone_Drop : public CDOTA_Item_Physical /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7B0]; // offset 0x0
    int32 m_iTempViewer; // offset 0x7B0, size 0x4, align 4
    int32 m_iTeam; // offset 0x7B4, size 0x4, align 4
};
