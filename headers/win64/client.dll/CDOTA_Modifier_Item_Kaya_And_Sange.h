#pragma once

class CDOTA_Modifier_Item_Kaya_And_Sange : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_strength; // offset 0x1A78, size 0x4, align 4
    int32 hp_regen_amp; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1A80, size 0x4, align 4
    int32 spell_amp; // offset 0x1A84, size 0x4, align 4
    int32 mana_regen_multiplier; // offset 0x1A88, size 0x4, align 4
    int32 slow_resistance; // offset 0x1A8C, size 0x4, align 4
    int32 healing_amp; // offset 0x1A90, size 0x4, align 4
    int32 manacost_reduction; // offset 0x1A94, size 0x4, align 4
};
