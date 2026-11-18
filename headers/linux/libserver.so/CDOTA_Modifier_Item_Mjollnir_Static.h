#pragma once

class CDOTA_Modifier_Item_Mjollnir_Static : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B0C]; // offset 0x0
    int32 static_chance; // offset 0x1B0C, size 0x4, align 4
    int32 static_strikes; // offset 0x1B10, size 0x4, align 4
    int32 static_damage; // offset 0x1B14, size 0x4, align 4
    int32 static_primary_radius; // offset 0x1B18, size 0x4, align 4
    int32 static_seconary_radius; // offset 0x1B1C, size 0x4, align 4
    int32 static_radius; // offset 0x1B20, size 0x4, align 4
    float32 static_cooldown; // offset 0x1B24, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
    CountdownTimer m_StaticTimer; // offset 0x1B30, size 0x18, align 8
};
