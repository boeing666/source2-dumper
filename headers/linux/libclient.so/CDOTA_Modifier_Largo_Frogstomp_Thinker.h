#pragma once

class CDOTA_Modifier_Largo_Frogstomp_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_per_stomp; // offset 0x1AF8, size 0x4, align 4
    int32 total_ticks; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 stun_duration; // offset 0x1B04, size 0x4, align 4
    float32 stomp_interval; // offset 0x1B08, size 0x4, align 4
    float32 delay; // offset 0x1B0C, size 0x4, align 4
    int32 infinite_stomps; // offset 0x1B10, size 0x4, align 4
    bool m_bStarted; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
};
