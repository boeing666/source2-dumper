#pragma once

class CDOTA_Modifier_QueenOfPain_Innate_Seduction : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 spell_lifesteal; // offset 0x1A78, size 0x4, align 4
    float32 close_radius; // offset 0x1A7C, size 0x4, align 4
    float32 max_radius; // offset 0x1A80, size 0x4, align 4
    float32 spell_lifesteal_close; // offset 0x1A84, size 0x4, align 4
    int32 lifesteal_reflected; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
