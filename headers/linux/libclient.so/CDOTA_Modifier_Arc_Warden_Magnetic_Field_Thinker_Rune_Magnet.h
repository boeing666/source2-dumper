#pragma once

class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 rune_pull_strength; // offset 0x1A5C, size 0x4, align 4
    float32 rune_pull_max_speed_as_multiplier_of_pull_strength; // offset 0x1A60, size 0x4, align 4
    float32 rune_activate_radius_buffer; // offset 0x1A64, size 0x4, align 4
    float32 rune_pull_falloff_multiplier; // offset 0x1A68, size 0x4, align 4
    float32 rune_pull_radius; // offset 0x1A6C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A70, size 0x4, align 255
    GameTime_t m_flBubbleExpirationTime; // offset 0x1A74, size 0x4, align 255
};
