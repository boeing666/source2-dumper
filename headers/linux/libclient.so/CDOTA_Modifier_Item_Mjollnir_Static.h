#pragma once

class CDOTA_Modifier_Item_Mjollnir_Static : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A6C]; // offset 0x0
    int32 static_chance; // offset 0x1A6C, size 0x4, align 4
    int32 static_strikes; // offset 0x1A70, size 0x4, align 4
    int32 static_damage; // offset 0x1A74, size 0x4, align 4
    int32 static_primary_radius; // offset 0x1A78, size 0x4, align 4
    int32 static_seconary_radius; // offset 0x1A7C, size 0x4, align 4
    int32 static_radius; // offset 0x1A80, size 0x4, align 4
    float32 static_cooldown; // offset 0x1A84, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
