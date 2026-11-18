#pragma once

class CDOTA_Modifier_Morphling_Replicate_Echo_Source : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 scepter_echo_count; // offset 0x1AF8, size 0x4, align 4
    float32 scepter_echo_cast_delay; // offset 0x1AFC, size 0x4, align 4
    float32 scepter_echo_appear_distance; // offset 0x1B00, size 0x4, align 4
    float32 scepter_echo_visible_duration; // offset 0x1B04, size 0x4, align 4
    float32 scepter_echo_retarget_radius; // offset 0x1B08, size 0x4, align 4
    float32 scepter_echo_damage_outgoing_pct; // offset 0x1B0C, size 0x4, align 4
    float32 scepter_echo_damage_falloff_pct; // offset 0x1B10, size 0x4, align 4
    float32 scepter_echo_min_model_scale; // offset 0x1B14, size 0x4, align 4
};
