#pragma once

class CDOTA_Modifier_Item_Kaya_And_Sange : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_strength; // offset 0x1A58, size 0x4, align 4
    int32 hp_regen_amp; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1A60, size 0x4, align 4
    int32 spell_amp; // offset 0x1A64, size 0x4, align 4
    int32 mana_regen_multiplier; // offset 0x1A68, size 0x4, align 4
    int32 slow_resistance; // offset 0x1A6C, size 0x4, align 4
    int32 healing_amp; // offset 0x1A70, size 0x4, align 4
    int32 manacost_reduction; // offset 0x1A74, size 0x4, align 4
};
