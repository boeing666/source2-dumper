#pragma once

class CDOTA_Modifier_Largo_Frogstomp_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_per_stomp; // offset 0x1A58, size 0x4, align 4
    int32 total_ticks; // offset 0x1A5C, size 0x4, align 4
    float32 radius; // offset 0x1A60, size 0x4, align 4
    float32 stun_duration; // offset 0x1A64, size 0x4, align 4
    float32 stomp_interval; // offset 0x1A68, size 0x4, align 4
    float32 delay; // offset 0x1A6C, size 0x4, align 4
    int32 infinite_stomps; // offset 0x1A70, size 0x4, align 4
    bool m_bStarted; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
};
