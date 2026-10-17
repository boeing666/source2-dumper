#pragma once

class CDOTA_Modifier_Seasonal_TI11_CongaLine : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 NUM_SOUNDS; // offset 0x1AA8, size 0x4, align 4
    float32 dance_interval; // offset 0x1AAC, size 0x4, align 4
    float32 gesture_duration; // offset 0x1AB0, size 0x4, align 4
    float32 catch_up_distance; // offset 0x1AB4, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB8, size 0x4, align 4
    float32 slow_amount; // offset 0x1ABC, size 0x4, align 4
    int32 m_nGesture; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecDancers; // offset 0x1AC8, size 0x18, align 8
    char _pad_1AE0[0x30]; // offset 0x1AE0
    bool m_bIsGesturing; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
