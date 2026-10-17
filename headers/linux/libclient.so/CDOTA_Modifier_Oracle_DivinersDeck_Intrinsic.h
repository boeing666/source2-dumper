#pragma once

class CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AE0]; // offset 0x0
    bool enabled; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x3]; // offset 0x1AE1
    float32 duration; // offset 0x1AE4, size 0x4, align 4
    float32 spell_amplification; // offset 0x1AE8, size 0x4, align 4
    float32 gold_bonus_pct; // offset 0x1AEC, size 0x4, align 4
    float32 int_bonus_pct; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
