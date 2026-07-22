#pragma once

class CDOTA_Modifier_Elder_Titan_EchoStomp : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 wake_damage_limit; // offset 0x1A58, size 0x4, align 4
    float32 animation_rate; // offset 0x1A5C, size 0x4, align 4
    float32 initial_stun_duration; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CountdownTimer ctStunTimer; // offset 0x1A68, size 0x18, align 8
    float32 m_flDamageTaken; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
