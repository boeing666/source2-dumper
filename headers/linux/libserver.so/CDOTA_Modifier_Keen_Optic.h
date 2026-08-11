#pragma once

class CDOTA_Modifier_Keen_Optic : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 bonus_mana_regen; // offset 0x1A78, size 0x4, align 4
    int32 cast_range_bonus; // offset 0x1A7C, size 0x4, align 4
};
