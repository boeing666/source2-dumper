#pragma once

class CDOTA_Modifier_QueenOfPain_ShadowStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 duration_damage; // offset 0x1AF8, size 0x4, align 4
    int32 duration_heal; // offset 0x1AFC, size 0x4, align 4
    int32 movement_slow; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CountdownTimer m_SlowInterval; // offset 0x1B08, size 0x18, align 8
    float32 m_flSlowStep; // offset 0x1B20, size 0x4, align 4
    float32 m_flSlowStepStep; // offset 0x1B24, size 0x4, align 4
    float32 attack_buff_duration; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
