#pragma once

class CDOTA_Modifier_Pudge_GraftFlesh : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 flesh_heap_range; // offset 0x1A78, size 0x4, align 4
    float32 flesh_heap_strength_buff_amount; // offset 0x1A7C, size 0x4, align 4
};
