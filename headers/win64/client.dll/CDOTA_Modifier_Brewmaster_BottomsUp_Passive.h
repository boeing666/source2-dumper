#pragma once

class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B10]; // offset 0x0
    int32 brewed_up_per_ability; // offset 0x1B10, size 0x4, align 4
    int32 brewed_up_per_proc; // offset 0x1B14, size 0x4, align 4
    int32 brewed_up_max_stack; // offset 0x1B18, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1B1C, size 0x4, align 4
    float32 brewed_up_min_speed; // offset 0x1B20, size 0x4, align 4
    float32 brewed_up_max_speed; // offset 0x1B24, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1B28, size 0x4, align 4
    float32 stack_duration; // offset 0x1B2C, size 0x4, align 4
    bool m_bMinimumSpeed; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    GameTime_t m_SpeedToggleTime; // offset 0x1B34, size 0x4, align 255
    int32 m_nMaxHPRegen; // offset 0x1B38, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1B3C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B40, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B44, size 0x4, align 255
};
