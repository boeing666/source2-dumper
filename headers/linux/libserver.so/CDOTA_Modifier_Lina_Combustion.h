#pragma once

class CDOTA_Modifier_Lina_Combustion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_aoe; // offset 0x1AA8, size 0x4, align 4
    float32 damage; // offset 0x1AAC, size 0x4, align 4
    float32 damage_illusions; // offset 0x1AB0, size 0x4, align 4
    float32 damage_threshold; // offset 0x1AB4, size 0x4, align 4
};
