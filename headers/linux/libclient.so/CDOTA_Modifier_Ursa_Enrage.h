#pragma once

class CDOTA_Modifier_Ursa_Enrage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage_reduction; // offset 0x1AA8, size 0x4, align 4
    int32 status_resistance; // offset 0x1AAC, size 0x4, align 4
    float32 health_as_damage_pct; // offset 0x1AB0, size 0x4, align 4
    float32 damage_increase; // offset 0x1AB4, size 0x4, align 4
};
