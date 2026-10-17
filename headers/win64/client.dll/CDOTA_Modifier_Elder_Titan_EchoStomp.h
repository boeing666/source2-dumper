#pragma once

class CDOTA_Modifier_Elder_Titan_EchoStomp : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 wake_damage_limit; // offset 0x1AA8, size 0x4, align 4
    float32 animation_rate; // offset 0x1AAC, size 0x4, align 4
    float32 initial_stun_duration; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CountdownTimer ctStunTimer; // offset 0x1AB8, size 0x18, align 8
    float32 m_flDamageTaken; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
