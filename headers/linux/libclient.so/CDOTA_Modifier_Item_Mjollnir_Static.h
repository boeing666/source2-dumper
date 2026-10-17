#pragma once

class CDOTA_Modifier_Item_Mjollnir_Static : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1ABC]; // offset 0x0
    int32 static_chance; // offset 0x1ABC, size 0x4, align 4
    int32 static_strikes; // offset 0x1AC0, size 0x4, align 4
    int32 static_damage; // offset 0x1AC4, size 0x4, align 4
    int32 static_primary_radius; // offset 0x1AC8, size 0x4, align 4
    int32 static_seconary_radius; // offset 0x1ACC, size 0x4, align 4
    int32 static_radius; // offset 0x1AD0, size 0x4, align 4
    float32 static_cooldown; // offset 0x1AD4, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
