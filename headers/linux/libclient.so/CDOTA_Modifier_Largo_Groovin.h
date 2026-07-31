#pragma once

class CDOTA_Modifier_Largo_Groovin : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 armor_per_stack; // offset 0x1A78, size 0x4, align 4
    float32 song_cost_reduction_per_stack_tooltip; // offset 0x1A7C, size 0x4, align 4
    int32 num_stacks; // offset 0x1A80, size 0x4, align 4
    float32 radius; // offset 0x1A84, size 0x4, align 4
};
