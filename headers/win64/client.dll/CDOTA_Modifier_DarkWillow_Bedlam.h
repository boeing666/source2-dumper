#pragma once

class CDOTA_Modifier_DarkWillow_Bedlam : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 m_flRotation; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hWisp; // offset 0x1A5C, size 0x4, align 4
    GameTime_t m_flLastAttack; // offset 0x1A60, size 0x4, align 255
    float32 roaming_radius; // offset 0x1A64, size 0x4, align 4
    float32 attack_radius; // offset 0x1A68, size 0x4, align 4
    float32 roaming_seconds_per_rotation; // offset 0x1A6C, size 0x4, align 4
    float32 attack_interval; // offset 0x1A70, size 0x4, align 4
    int32 target_count; // offset 0x1A74, size 0x4, align 4
    bool m_bTravelling; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 travel_speed; // offset 0x1A7C, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
