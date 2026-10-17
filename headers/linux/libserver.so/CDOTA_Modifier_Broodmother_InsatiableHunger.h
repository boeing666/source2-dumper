#pragma once

class CDOTA_Modifier_Broodmother_InsatiableHunger : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    int32 lifesteal_pct; // offset 0x1AAC, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB0, size 0x4, align 4
    float32 bat_bonus; // offset 0x1AB4, size 0x4, align 4
    float32 shard_damage_tick_interval; // offset 0x1AB8, size 0x4, align 4
    int32 damage_tick_count; // offset 0x1ABC, size 0x4, align 4
    int32 shard_damage_per_tick; // offset 0x1AC0, size 0x4, align 4
    int32 m_nTotalBonusDamage; // offset 0x1AC4, size 0x4, align 4
};
