#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 latch_range; // offset 0x1AA8, size 0x4, align 4
    int32 latch_vision; // offset 0x1AAC, size 0x4, align 4
    float32 latch_creation_delay; // offset 0x1AB0, size 0x4, align 4
    float32 latch_duration; // offset 0x1AB4, size 0x4, align 4
    char _pad_1AB8[0x14]; // offset 0x1AB8
    bool m_bActive; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
};
