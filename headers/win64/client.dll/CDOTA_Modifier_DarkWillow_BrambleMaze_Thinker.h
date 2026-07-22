#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 latch_range; // offset 0x1A58, size 0x4, align 4
    int32 latch_vision; // offset 0x1A5C, size 0x4, align 4
    float32 latch_creation_delay; // offset 0x1A60, size 0x4, align 4
    float32 latch_duration; // offset 0x1A64, size 0x4, align 4
    char _pad_1A68[0x14]; // offset 0x1A68
    bool m_bActive; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
