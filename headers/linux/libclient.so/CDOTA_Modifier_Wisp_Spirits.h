#pragma once

class CDOTA_Modifier_Wisp_Spirits : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 creep_damage; // offset 0x1A58, size 0x4, align 4
    float32 hero_damage; // offset 0x1A5C, size 0x4, align 4
    float32 hit_radius; // offset 0x1A60, size 0x4, align 4
    float32 hero_hit_radius; // offset 0x1A64, size 0x4, align 4
    float32 explode_radius; // offset 0x1A68, size 0x4, align 4
    float32 min_range; // offset 0x1A6C, size 0x4, align 4
    float32 max_range; // offset 0x1A70, size 0x4, align 4
    float32 default_radius; // offset 0x1A74, size 0x4, align 4
    int32 spirit_amount; // offset 0x1A78, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A7C, size 0x4, align 4
    float32 m_flSpiritRadius; // offset 0x1A80, size 0x4, align 4
    float32 spirit_movement_rate; // offset 0x1A84, size 0x4, align 4
    float32 spirit_spawn_time; // offset 0x1A88, size 0x4, align 4
    float32 scepter_slow_duration; // offset 0x1A8C, size 0x4, align 4
    GameTime_t m_flNextSpawn; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlString m_strSpiritsOutSwapAbility; // offset 0x1A98, size 0x8, align 8
    char _pad_1AA0[0x90]; // offset 0x1AA0
};
