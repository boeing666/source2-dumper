#pragma once

class CDOTA_Modifier_QueenOfPain_Innate_Seduction : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 spell_lifesteal; // offset 0x1A58, size 0x4, align 4
    float32 close_radius; // offset 0x1A5C, size 0x4, align 4
    float32 max_radius; // offset 0x1A60, size 0x4, align 4
    float32 spell_lifesteal_close; // offset 0x1A64, size 0x4, align 4
    int32 lifesteal_reflected; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
