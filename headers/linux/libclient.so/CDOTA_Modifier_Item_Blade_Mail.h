#pragma once

class CDOTA_Modifier_Item_Blade_Mail : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1B00, size 0x4, align 4
    int32 passive_reflection_constant; // offset 0x1B04, size 0x4, align 4
    int32 passive_reflection_pct; // offset 0x1B08, size 0x4, align 4
    int32 active_reflection_pct; // offset 0x1B0C, size 0x4, align 4
};
