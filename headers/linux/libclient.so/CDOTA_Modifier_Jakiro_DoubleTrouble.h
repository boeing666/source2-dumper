#pragma once

class CDOTA_Modifier_Jakiro_DoubleTrouble : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 second_attack_delay; // offset 0x1AA8, size 0x4, align 4
    float32 attack_damage_reduction; // offset 0x1AAC, size 0x4, align 4
};
