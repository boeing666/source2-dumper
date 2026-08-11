#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 latch_range; // offset 0x1A78, size 0x4, align 4
    int32 latch_vision; // offset 0x1A7C, size 0x4, align 4
    float32 latch_creation_delay; // offset 0x1A80, size 0x4, align 4
    float32 latch_duration; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x14]; // offset 0x1A88
    bool m_bActive; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
};
