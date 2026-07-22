#pragma once

class CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A90]; // offset 0x0
    bool enabled; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    float32 duration; // offset 0x1A94, size 0x4, align 4
    float32 spell_amplification; // offset 0x1A98, size 0x4, align 4
    float32 gold_bonus_pct; // offset 0x1A9C, size 0x4, align 4
    float32 int_bonus_pct; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
