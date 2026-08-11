#pragma once

class CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AB0]; // offset 0x0
    bool enabled; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 duration; // offset 0x1AB4, size 0x4, align 4
    float32 spell_amplification; // offset 0x1AB8, size 0x4, align 4
    float32 gold_bonus_pct; // offset 0x1ABC, size 0x4, align 4
    float32 int_bonus_pct; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
