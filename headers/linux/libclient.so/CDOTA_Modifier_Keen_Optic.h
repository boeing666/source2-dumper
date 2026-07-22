#pragma once

class CDOTA_Modifier_Keen_Optic : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_mana_regen; // offset 0x1A58, size 0x4, align 4
    int32 cast_range_bonus; // offset 0x1A5C, size 0x4, align 4
};
