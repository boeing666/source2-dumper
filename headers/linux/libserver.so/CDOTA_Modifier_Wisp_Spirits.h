#pragma once

class CDOTA_Modifier_Wisp_Spirits : public CDOTA_Buff /*0x0*/  // sizeof 0x1BD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bSpiritsExplode; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 creep_damage; // offset 0x1AFC, size 0x4, align 4
    float32 hero_damage; // offset 0x1B00, size 0x4, align 4
    float32 hit_radius; // offset 0x1B04, size 0x4, align 4
    float32 hero_hit_radius; // offset 0x1B08, size 0x4, align 4
    float32 explode_radius; // offset 0x1B0C, size 0x4, align 4
    float32 min_range; // offset 0x1B10, size 0x4, align 4
    float32 max_range; // offset 0x1B14, size 0x4, align 4
    float32 default_radius; // offset 0x1B18, size 0x4, align 4
    int32 spirit_amount; // offset 0x1B1C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1B20, size 0x4, align 4
    float32 m_flSpiritRadius; // offset 0x1B24, size 0x4, align 4
    float32 spirit_movement_rate; // offset 0x1B28, size 0x4, align 4
    float32 spirit_spawn_time; // offset 0x1B2C, size 0x4, align 4
    float32 scepter_slow_duration; // offset 0x1B30, size 0x4, align 4
    GameTime_t m_flNextSpawn; // offset 0x1B34, size 0x4, align 255
    CUtlString m_strSpiritsOutSwapAbility; // offset 0x1B38, size 0x8, align 8
    char _pad_1B40[0x90]; // offset 0x1B40
};
