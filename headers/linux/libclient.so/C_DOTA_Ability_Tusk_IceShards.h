#pragma once

class C_DOTA_Ability_Tusk_IceShards : public C_DOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_iProjectile; // offset 0x824, size 0x4, align 4
    float32 shard_width; // offset 0x828, size 0x4, align 4
    float32 shard_damage; // offset 0x82C, size 0x4, align 4
    int32 shard_count; // offset 0x830, size 0x4, align 4
    float32 shard_speed; // offset 0x834, size 0x4, align 4
    float32 shard_duration; // offset 0x838, size 0x4, align 4
    float32 shard_angle_step; // offset 0x83C, size 0x4, align 4
    float32 shard_distance; // offset 0x840, size 0x4, align 4
    VectorWS m_vSpawnOrigin; // offset 0x844, size 0xC, align 4
    Vector m_vDirection; // offset 0x850, size 0xC, align 4
    char _pad_085C[0x4]; // offset 0x85C
    CUtlVector< CHandle< C_BaseEntity > > m_vecShards; // offset 0x860, size 0x18, align 8
};
