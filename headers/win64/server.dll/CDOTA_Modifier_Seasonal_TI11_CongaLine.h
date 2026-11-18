#pragma once

class CDOTA_Modifier_Seasonal_TI11_CongaLine : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 NUM_SOUNDS; // offset 0x1AF8, size 0x4, align 4
    float32 dance_interval; // offset 0x1AFC, size 0x4, align 4
    float32 gesture_duration; // offset 0x1B00, size 0x4, align 4
    float32 catch_up_distance; // offset 0x1B04, size 0x4, align 4
    float32 slow_duration; // offset 0x1B08, size 0x4, align 4
    float32 slow_amount; // offset 0x1B0C, size 0x4, align 4
    int32 m_nGesture; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecDancers; // offset 0x1B18, size 0x18, align 8
    char _pad_1B30[0x30]; // offset 0x1B30
    bool m_bIsGesturing; // offset 0x1B60, size 0x1, align 1
    char _pad_1B61[0x7]; // offset 0x1B61
};
