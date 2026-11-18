#pragma once

class CDOTA_Modifier_DarkWillow_Bedlam : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flRotation; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hWisp; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_flLastAttack; // offset 0x1B00, size 0x4, align 255
    float32 roaming_radius; // offset 0x1B04, size 0x4, align 4
    float32 attack_radius; // offset 0x1B08, size 0x4, align 4
    float32 roaming_seconds_per_rotation; // offset 0x1B0C, size 0x4, align 4
    float32 attack_interval; // offset 0x1B10, size 0x4, align 4
    int32 target_count; // offset 0x1B14, size 0x4, align 4
    bool m_bTravelling; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    float32 travel_speed; // offset 0x1B1C, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
