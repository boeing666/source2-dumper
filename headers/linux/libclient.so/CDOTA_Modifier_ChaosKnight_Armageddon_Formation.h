#pragma once

class CDOTA_Modifier_ChaosKnight_Armageddon_Formation : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 hit_radius; // offset 0x1AF8, size 0x4, align 4
    int32 attack_while_charging; // offset 0x1AFC, size 0x4, align 4
    float32 jump_distance; // offset 0x1B00, size 0x4, align 4
    float32 run_animation_rate; // offset 0x1B04, size 0x4, align 4
    float32 m_flOffsetForward; // offset 0x1B08, size 0x4, align 4
    float32 m_flOffsetRight; // offset 0x1B0C, size 0x4, align 4
    char _pad_1B10[0x8]; // offset 0x1B10
};
