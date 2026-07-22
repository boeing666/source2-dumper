#pragma once

class CDOTA_Modifier_Item_Blade_Mail : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1A60, size 0x4, align 4
    int32 passive_reflection_constant; // offset 0x1A64, size 0x4, align 4
    int32 passive_reflection_pct; // offset 0x1A68, size 0x4, align 4
    int32 active_reflection_pct; // offset 0x1A6C, size 0x4, align 4
};
