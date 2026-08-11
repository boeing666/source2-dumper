#pragma once

class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 rune_pull_strength; // offset 0x1A7C, size 0x4, align 4
    float32 rune_pull_max_speed_as_multiplier_of_pull_strength; // offset 0x1A80, size 0x4, align 4
    float32 rune_activate_radius_buffer; // offset 0x1A84, size 0x4, align 4
    float32 rune_pull_falloff_multiplier; // offset 0x1A88, size 0x4, align 4
    float32 rune_pull_radius; // offset 0x1A8C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A90, size 0x4, align 255
    GameTime_t m_flBubbleExpirationTime; // offset 0x1A94, size 0x4, align 255
    char _pad_1A98[0x18]; // offset 0x1A98
};
