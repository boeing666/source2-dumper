#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 latch_range; // offset 0x1AF8, size 0x4, align 4
    int32 latch_vision; // offset 0x1AFC, size 0x4, align 4
    float32 latch_creation_delay; // offset 0x1B00, size 0x4, align 4
    float32 latch_duration; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x14]; // offset 0x1B08
    bool m_bActive; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
};
