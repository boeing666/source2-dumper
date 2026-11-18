#pragma once

class CDOTA_Modifier_Techies_Minefield_Sign_Scepter : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 aura_radius; // offset 0x1AF8, size 0x4, align 4
    float32 minefield_duration; // offset 0x1AFC, size 0x4, align 4
};
