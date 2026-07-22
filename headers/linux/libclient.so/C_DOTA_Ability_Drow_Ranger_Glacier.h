#pragma once

class C_DOTA_Ability_Drow_Ranger_Glacier : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 shard_width; // offset 0x824, size 0x4, align 4
    int32 shard_count; // offset 0x828, size 0x4, align 4
    float32 shard_duration; // offset 0x82C, size 0x4, align 4
    float32 shard_angle_step; // offset 0x830, size 0x4, align 4
    int32 shard_distance; // offset 0x834, size 0x4, align 4
    VectorWS m_vSpawnOrigin; // offset 0x838, size 0xC, align 4
    Vector m_vDirection; // offset 0x844, size 0xC, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecShards; // offset 0x850, size 0x18, align 8
};
