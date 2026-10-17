#pragma once

class CDOTA_Modifier_Wisp_Spirits : public CDOTA_Buff /*0x0*/  // sizeof 0x1B80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bSpiritsExplode; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 creep_damage; // offset 0x1AAC, size 0x4, align 4
    float32 hero_damage; // offset 0x1AB0, size 0x4, align 4
    float32 hit_radius; // offset 0x1AB4, size 0x4, align 4
    float32 hero_hit_radius; // offset 0x1AB8, size 0x4, align 4
    float32 explode_radius; // offset 0x1ABC, size 0x4, align 4
    float32 min_range; // offset 0x1AC0, size 0x4, align 4
    float32 max_range; // offset 0x1AC4, size 0x4, align 4
    float32 default_radius; // offset 0x1AC8, size 0x4, align 4
    int32 spirit_amount; // offset 0x1ACC, size 0x4, align 4
    float32 m_flRotation; // offset 0x1AD0, size 0x4, align 4
    float32 m_flSpiritRadius; // offset 0x1AD4, size 0x4, align 4
    float32 spirit_movement_rate; // offset 0x1AD8, size 0x4, align 4
    float32 spirit_spawn_time; // offset 0x1ADC, size 0x4, align 4
    float32 scepter_slow_duration; // offset 0x1AE0, size 0x4, align 4
    GameTime_t m_flNextSpawn; // offset 0x1AE4, size 0x4, align 255
    CUtlString m_strSpiritsOutSwapAbility; // offset 0x1AE8, size 0x8, align 8
    char _pad_1AF0[0x90]; // offset 0x1AF0
};
