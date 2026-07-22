#pragma once

class CDOTA_Ability_Drow_Ranger_Glacier : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 shard_width; // offset 0x85C, size 0x4, align 4
    int32 shard_count; // offset 0x860, size 0x4, align 4
    float32 shard_duration; // offset 0x864, size 0x4, align 4
    float32 shard_angle_step; // offset 0x868, size 0x4, align 4
    int32 shard_distance; // offset 0x86C, size 0x4, align 4
    VectorWS m_vSpawnOrigin; // offset 0x870, size 0xC, align 4
    Vector m_vDirection; // offset 0x87C, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecShards; // offset 0x888, size 0x18, align 8
    char _pad_08A0[0x8]; // offset 0x8A0
    CDOTABaseAbility* m_pIceShardsStop; // offset 0x8A8, size 0x8, align 8
    char _pad_08B0[0x14]; // offset 0x8B0
    ParticleIndex_t m_nFXIndex; // offset 0x8C4, size 0x4, align 255
};
