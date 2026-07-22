#pragma once

class CDOTA_Item_AeonDisk : public CDOTA_Item /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    int32 m_nUses; // offset 0x92C, size 0x4, align 4
    int32 max_level; // offset 0x930, size 0x4, align 4
    char _pad_0934[0x4]; // offset 0x934
};
