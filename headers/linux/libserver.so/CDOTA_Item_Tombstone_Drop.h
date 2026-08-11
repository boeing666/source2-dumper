#pragma once

class CDOTA_Item_Tombstone_Drop : public CDOTA_Item_Physical /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA84]; // offset 0x0
    int32 m_iTempViewer; // offset 0xA84, size 0x4, align 4
    int32 m_iTeam; // offset 0xA88, size 0x4, align 4
    char _pad_0A8C[0x4]; // offset 0xA8C
};
