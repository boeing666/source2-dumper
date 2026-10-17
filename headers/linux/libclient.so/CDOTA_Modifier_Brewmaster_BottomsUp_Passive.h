#pragma once

class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    int32 brewed_up_per_ability; // offset 0x1AC0, size 0x4, align 4
    int32 brewed_up_per_proc; // offset 0x1AC4, size 0x4, align 4
    int32 brewed_up_max_stack; // offset 0x1AC8, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1ACC, size 0x4, align 4
    float32 brewed_up_min_speed; // offset 0x1AD0, size 0x4, align 4
    float32 brewed_up_max_speed; // offset 0x1AD4, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1AD8, size 0x4, align 4
    float32 stack_duration; // offset 0x1ADC, size 0x4, align 4
    bool m_bMinimumSpeed; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x3]; // offset 0x1AE1
    GameTime_t m_SpeedToggleTime; // offset 0x1AE4, size 0x4, align 255
    int32 m_nMaxHPRegen; // offset 0x1AE8, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1AEC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AF0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AF4, size 0x4, align 255
};
