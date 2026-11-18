#pragma once

class CDOTA_Modifier_Life_Stealer_Ghoul_Frenzy : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 attack_speed_bonus; // offset 0x1AF8, size 0x4, align 4
    float32 movement_speed_bonus; // offset 0x1AFC, size 0x4, align 4
};
