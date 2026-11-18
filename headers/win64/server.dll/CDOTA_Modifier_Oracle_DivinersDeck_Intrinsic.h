#pragma once

class CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B30]; // offset 0x0
    bool enabled; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    float32 duration; // offset 0x1B34, size 0x4, align 4
    float32 spell_amplification; // offset 0x1B38, size 0x4, align 4
    float32 gold_bonus_pct; // offset 0x1B3C, size 0x4, align 4
    float32 int_bonus_pct; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
