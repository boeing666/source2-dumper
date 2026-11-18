#pragma once

class CDOTA_Modifier_Lina_Combustion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_aoe; // offset 0x1AF8, size 0x4, align 4
    float32 damage; // offset 0x1AFC, size 0x4, align 4
    float32 damage_illusions; // offset 0x1B00, size 0x4, align 4
    float32 damage_threshold; // offset 0x1B04, size 0x4, align 4
};
