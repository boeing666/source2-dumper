#pragma once

class CDOTA_Item_Tombstone_Drop : public CDOTA_Item_Physical /*0x0*/  // sizeof 0xB70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB64]; // offset 0x0
    int32 m_iTempViewer; // offset 0xB64, size 0x4, align 4
    int32 m_iTeam; // offset 0xB68, size 0x4, align 4
    char _pad_0B6C[0x4]; // offset 0xB6C
};
