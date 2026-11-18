#pragma once

class CDOTA_Modifier_Item_HydrasBreath_Poison : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 poison_damage_per_second; // offset 0x1AF8, size 0x4, align 4
    float32 poison_base_damage; // offset 0x1AFC, size 0x4, align 4
};
