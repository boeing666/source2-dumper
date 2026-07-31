#pragma once

class CDOTA_Modifier_Dark_Willow_Pixie_Dust : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 hp_regen_amp; // offset 0x1A78, size 0x4, align 4
    int32 mana_regen_amp; // offset 0x1A7C, size 0x4, align 4
    int32 hp_regen_amp_out_of_world; // offset 0x1A80, size 0x4, align 4
    int32 mana_regen_amp_out_of_world; // offset 0x1A84, size 0x4, align 4
};
