#pragma once

class CDOTA_Modifier_Rubick_Curiosity : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 curiosity_per_spell_cast; // offset 0x1AF8, size 0x4, align 4
    float32 curiosity_duration; // offset 0x1AFC, size 0x4, align 4
    float32 charge_radius; // offset 0x1B00, size 0x4, align 4
    int32 curiosity_attack_damage; // offset 0x1B04, size 0x4, align 4
    float32 curiosity_modifier_amp; // offset 0x1B08, size 0x4, align 4
    int32 curiosity_aoe_bonus; // offset 0x1B0C, size 0x4, align 4
    int32 curiosity_per_kill; // offset 0x1B10, size 0x4, align 4
    float32 grace_period; // offset 0x1B14, size 0x4, align 4
    char _pad_1B18[0x18]; // offset 0x1B18
    int32 m_nCuriosityGained; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
