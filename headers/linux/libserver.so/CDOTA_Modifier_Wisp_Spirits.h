#pragma once

class CDOTA_Modifier_Wisp_Spirits : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bSpiritsExplode; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 creep_damage; // offset 0x1A7C, size 0x4, align 4
    float32 hero_damage; // offset 0x1A80, size 0x4, align 4
    float32 hit_radius; // offset 0x1A84, size 0x4, align 4
    float32 hero_hit_radius; // offset 0x1A88, size 0x4, align 4
    float32 explode_radius; // offset 0x1A8C, size 0x4, align 4
    float32 min_range; // offset 0x1A90, size 0x4, align 4
    float32 max_range; // offset 0x1A94, size 0x4, align 4
    float32 default_radius; // offset 0x1A98, size 0x4, align 4
    int32 spirit_amount; // offset 0x1A9C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1AA0, size 0x4, align 4
    float32 m_flSpiritRadius; // offset 0x1AA4, size 0x4, align 4
    float32 spirit_movement_rate; // offset 0x1AA8, size 0x4, align 4
    float32 spirit_spawn_time; // offset 0x1AAC, size 0x4, align 4
    float32 scepter_slow_duration; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_flNextSpawn; // offset 0x1AB4, size 0x4, align 255
    CUtlString m_strSpiritsOutSwapAbility; // offset 0x1AB8, size 0x8, align 8
    char _pad_1AC0[0x90]; // offset 0x1AC0
};
