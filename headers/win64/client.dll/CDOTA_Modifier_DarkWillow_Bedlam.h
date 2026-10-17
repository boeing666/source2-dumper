#pragma once

class CDOTA_Modifier_DarkWillow_Bedlam : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flRotation; // offset 0x1AA8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hWisp; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_flLastAttack; // offset 0x1AB0, size 0x4, align 255
    float32 roaming_radius; // offset 0x1AB4, size 0x4, align 4
    float32 attack_radius; // offset 0x1AB8, size 0x4, align 4
    float32 roaming_seconds_per_rotation; // offset 0x1ABC, size 0x4, align 4
    float32 attack_interval; // offset 0x1AC0, size 0x4, align 4
    int32 target_count; // offset 0x1AC4, size 0x4, align 4
    bool m_bTravelling; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    float32 travel_speed; // offset 0x1ACC, size 0x4, align 4
    int32 damage_reduction_pct; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
