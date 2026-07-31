#pragma once

class CDOTA_Modifier_Item_Chipped_Vest : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 hp_regen; // offset 0x1A78, size 0x4, align 4
    int32 damage_return_hero; // offset 0x1A7C, size 0x4, align 4
    int32 damage_return_creep; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
