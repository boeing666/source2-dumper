#pragma once

class CDOTA_Modifier_Slark_EssenceShift : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B18]; // offset 0x0
    int32 agi_gain; // offset 0x1B18, size 0x4, align 4
    float32 duration; // offset 0x1B1C, size 0x4, align 4
    int32 max_stacks_per_hero; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
