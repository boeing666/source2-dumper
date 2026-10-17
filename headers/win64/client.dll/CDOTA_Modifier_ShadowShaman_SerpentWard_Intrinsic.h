#pragma once

class CDOTA_Modifier_ShadowShaman_SerpentWard_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 ward_health; // offset 0x1AA8, size 0x4, align 4
    float32 mega_ward_multiplier_damage; // offset 0x1AAC, size 0x4, align 4
    float32 mega_ward_multiplier_health; // offset 0x1AB0, size 0x4, align 4
    float32 ward_damage_tooltip; // offset 0x1AB4, size 0x4, align 4
};
