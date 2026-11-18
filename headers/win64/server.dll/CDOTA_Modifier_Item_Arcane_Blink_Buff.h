#pragma once

class CDOTA_Modifier_Item_Arcane_Blink_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 cast_pct_improvement; // offset 0x1AF8, size 0x4, align 4
    int32 manacost_reduction; // offset 0x1AFC, size 0x4, align 4
    int32 debuff_amp; // offset 0x1B00, size 0x4, align 4
    int32 cast_range_bonus; // offset 0x1B04, size 0x4, align 4
};
