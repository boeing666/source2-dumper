#pragma once

class CDOTA_Modifier_Item_Mjollnir_Static : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A8C]; // offset 0x0
    int32 static_chance; // offset 0x1A8C, size 0x4, align 4
    int32 static_strikes; // offset 0x1A90, size 0x4, align 4
    int32 static_damage; // offset 0x1A94, size 0x4, align 4
    int32 static_primary_radius; // offset 0x1A98, size 0x4, align 4
    int32 static_seconary_radius; // offset 0x1A9C, size 0x4, align 4
    int32 static_radius; // offset 0x1AA0, size 0x4, align 4
    float32 static_cooldown; // offset 0x1AA4, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CountdownTimer m_StaticTimer; // offset 0x1AB0, size 0x18, align 8
};
