#pragma once

class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A70]; // offset 0x0
    int32 brewed_up_per_ability; // offset 0x1A70, size 0x4, align 4
    int32 brewed_up_per_proc; // offset 0x1A74, size 0x4, align 4
    int32 brewed_up_max_stack; // offset 0x1A78, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1A7C, size 0x4, align 4
    float32 brewed_up_min_speed; // offset 0x1A80, size 0x4, align 4
    float32 brewed_up_max_speed; // offset 0x1A84, size 0x4, align 4
    float32 speed_toggle_time; // offset 0x1A88, size 0x4, align 4
    float32 stack_duration; // offset 0x1A8C, size 0x4, align 4
    bool m_bMinimumSpeed; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    GameTime_t m_SpeedToggleTime; // offset 0x1A94, size 0x4, align 255
    int32 m_nMaxHPRegen; // offset 0x1A98, size 0x4, align 4
    int32 m_nCurrentSpeed; // offset 0x1A9C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AA0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AA4, size 0x4, align 255
};
