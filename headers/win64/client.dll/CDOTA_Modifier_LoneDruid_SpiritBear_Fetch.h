#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 tick_rate; // offset 0x1AA8, size 0x4, align 4
    int32 drag_distance; // offset 0x1AAC, size 0x4, align 4
    int32 break_distance; // offset 0x1AB0, size 0x4, align 4
    VectorWS vPreviousLocation; // offset 0x1AB4, size 0xC, align 4
};
