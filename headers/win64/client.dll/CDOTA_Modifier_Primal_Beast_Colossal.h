#pragma once

class CDOTA_Modifier_Primal_Beast_Colossal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 model_scale_per_stack; // offset 0x1A58, size 0x4, align 4
    int32 base_slow_resist; // offset 0x1A5C, size 0x4, align 4
    int32 base_aoe; // offset 0x1A60, size 0x4, align 4
    int32 hp_per_threshold; // offset 0x1A64, size 0x4, align 4
    int32 slow_resistance_per_threshold; // offset 0x1A68, size 0x4, align 4
    float32 aoe_per_threshold; // offset 0x1A6C, size 0x4, align 4
    float32 trample_bonus; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
