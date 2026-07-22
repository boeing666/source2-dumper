#pragma once

class CDOTA_Modifier_QueenOfPain_Masochist : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 spell_amplification; // offset 0x1A58, size 0x4, align 4
    float32 damage_reflected_to_self; // offset 0x1A5C, size 0x4, align 4
};
