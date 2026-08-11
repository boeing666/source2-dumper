#pragma once

class CDOTA_Modifier_QueenOfPain_ShadowStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 duration_damage; // offset 0x1A78, size 0x4, align 4
    int32 duration_heal; // offset 0x1A7C, size 0x4, align 4
    int32 movement_slow; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CountdownTimer m_SlowInterval; // offset 0x1A88, size 0x18, align 8
    float32 m_flSlowStep; // offset 0x1AA0, size 0x4, align 4
    float32 m_flSlowStepStep; // offset 0x1AA4, size 0x4, align 4
    float32 attack_buff_duration; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
