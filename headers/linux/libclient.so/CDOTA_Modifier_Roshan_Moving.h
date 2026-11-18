#pragma once

class CDOTA_Modifier_Roshan_Moving : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 move_pits_bonus_speed_per_interrupt; // offset 0x1AF8, size 0x4, align 4
    int32 move_pits_max_bonus_speed; // offset 0x1AFC, size 0x4, align 4
    int32 move_pits_slow_resistance; // offset 0x1B00, size 0x4, align 4
    bool m_bReachedMidpoint; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    int32 m_nInterruptCount; // offset 0x1B08, size 0x4, align 4
    float32 m_flGrabAttemptTime; // offset 0x1B0C, size 0x4, align 4
    GameTime_t m_flLastInterrupted; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
};
