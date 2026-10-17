#pragma once

class CDOTA_Modifier_Primal_Beast_Colossal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 model_scale_per_stack; // offset 0x1AA8, size 0x4, align 4
    int32 base_slow_resist; // offset 0x1AAC, size 0x4, align 4
    int32 base_aoe; // offset 0x1AB0, size 0x4, align 4
    int32 hp_per_threshold; // offset 0x1AB4, size 0x4, align 4
    int32 slow_resistance_per_threshold; // offset 0x1AB8, size 0x4, align 4
    float32 aoe_per_threshold; // offset 0x1ABC, size 0x4, align 4
    float32 trample_bonus; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
