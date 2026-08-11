#pragma once

class CDOTA_Modifier_Seasonal_TI11_CongaLine : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 NUM_SOUNDS; // offset 0x1A78, size 0x4, align 4
    float32 dance_interval; // offset 0x1A7C, size 0x4, align 4
    float32 gesture_duration; // offset 0x1A80, size 0x4, align 4
    float32 catch_up_distance; // offset 0x1A84, size 0x4, align 4
    float32 slow_duration; // offset 0x1A88, size 0x4, align 4
    float32 slow_amount; // offset 0x1A8C, size 0x4, align 4
    int32 m_nGesture; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecDancers; // offset 0x1A98, size 0x18, align 8
    char _pad_1AB0[0x30]; // offset 0x1AB0
    bool m_bIsGesturing; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x7]; // offset 0x1AE1
};
