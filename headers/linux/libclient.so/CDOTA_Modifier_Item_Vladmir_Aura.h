#pragma once

class CDOTA_Modifier_Item_Vladmir_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 lifesteal_aura; // offset 0x1A78, size 0x4, align 4
    int32 damage_aura; // offset 0x1A7C, size 0x4, align 4
    float32 armor_aura; // offset 0x1A80, size 0x4, align 4
    float32 mana_regen_aura; // offset 0x1A84, size 0x4, align 4
};
