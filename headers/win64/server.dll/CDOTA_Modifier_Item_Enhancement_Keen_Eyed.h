#pragma once

class CDOTA_Modifier_Item_Enhancement_Keen_Eyed : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 cast_range_bonus; // offset 0x1AF8, size 0x4, align 4
    int32 mana_reduction_pct; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
