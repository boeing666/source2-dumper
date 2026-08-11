#pragma once

class CDOTA_Modifier_Elder_Titan_EchoStomp : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 wake_damage_limit; // offset 0x1A78, size 0x4, align 4
    float32 animation_rate; // offset 0x1A7C, size 0x4, align 4
    float32 initial_stun_duration; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CountdownTimer ctStunTimer; // offset 0x1A88, size 0x18, align 8
    float32 m_flDamageTaken; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
