#pragma once

class CDOTA_Modifier_Item_Craggy_Coat_Tanky : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 active_armor; // offset 0x1A78, size 0x4, align 4
    int32 move_speed; // offset 0x1A7C, size 0x4, align 4
};
