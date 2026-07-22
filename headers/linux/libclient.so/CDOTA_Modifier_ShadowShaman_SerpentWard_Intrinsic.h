#pragma once

class CDOTA_Modifier_ShadowShaman_SerpentWard_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 ward_health; // offset 0x1A58, size 0x4, align 4
    float32 mega_ward_multiplier_damage; // offset 0x1A5C, size 0x4, align 4
    float32 mega_ward_multiplier_health; // offset 0x1A60, size 0x4, align 4
    float32 ward_damage_tooltip; // offset 0x1A64, size 0x4, align 4
};
