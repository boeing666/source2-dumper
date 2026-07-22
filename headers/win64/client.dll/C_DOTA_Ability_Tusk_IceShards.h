#pragma once

class C_DOTA_Ability_Tusk_IceShards : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iProjectile; // offset 0x6A8, size 0x4, align 4
    float32 shard_width; // offset 0x6AC, size 0x4, align 4
    float32 shard_damage; // offset 0x6B0, size 0x4, align 4
    int32 shard_count; // offset 0x6B4, size 0x4, align 4
    float32 shard_speed; // offset 0x6B8, size 0x4, align 4
    float32 shard_duration; // offset 0x6BC, size 0x4, align 4
    float32 shard_angle_step; // offset 0x6C0, size 0x4, align 4
    float32 shard_distance; // offset 0x6C4, size 0x4, align 4
    VectorWS m_vSpawnOrigin; // offset 0x6C8, size 0xC, align 4
    Vector m_vDirection; // offset 0x6D4, size 0xC, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecShards; // offset 0x6E0, size 0x18, align 8
};
