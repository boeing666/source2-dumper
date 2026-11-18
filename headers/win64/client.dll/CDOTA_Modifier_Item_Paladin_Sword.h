#pragma once

class CDOTA_Modifier_Item_Paladin_Sword : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_lifesteal; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_spell_lifesteal; // offset 0x1B00, size 0x4, align 4
    int32 bonus_amp; // offset 0x1B04, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
