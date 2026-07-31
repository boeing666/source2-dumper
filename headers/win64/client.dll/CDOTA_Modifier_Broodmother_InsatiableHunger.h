#pragma once

class CDOTA_Modifier_Broodmother_InsatiableHunger : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 lifesteal_pct; // offset 0x1A7C, size 0x4, align 4
    float32 slow_duration; // offset 0x1A80, size 0x4, align 4
    float32 bat_bonus; // offset 0x1A84, size 0x4, align 4
    float32 shard_damage_tick_interval; // offset 0x1A88, size 0x4, align 4
    int32 damage_tick_count; // offset 0x1A8C, size 0x4, align 4
    int32 shard_damage_per_tick; // offset 0x1A90, size 0x4, align 4
    int32 m_nTotalBonusDamage; // offset 0x1A94, size 0x4, align 4
};
