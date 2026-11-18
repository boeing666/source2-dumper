#pragma once

class CDOTA_Modifier_Item_NullTalisman : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_strength; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_agility; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1B00, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B04, size 0x4, align 4
    int32 bonus_mana; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
