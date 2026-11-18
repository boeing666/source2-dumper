#pragma once

class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 rune_pull_strength; // offset 0x1AFC, size 0x4, align 4
    float32 rune_pull_max_speed_as_multiplier_of_pull_strength; // offset 0x1B00, size 0x4, align 4
    float32 rune_activate_radius_buffer; // offset 0x1B04, size 0x4, align 4
    float32 rune_pull_falloff_multiplier; // offset 0x1B08, size 0x4, align 4
    float32 rune_pull_radius; // offset 0x1B0C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1B10, size 0x4, align 255
    GameTime_t m_flBubbleExpirationTime; // offset 0x1B14, size 0x4, align 255
};
