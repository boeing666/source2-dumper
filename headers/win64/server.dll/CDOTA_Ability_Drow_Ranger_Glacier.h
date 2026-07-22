#pragma once

class CDOTA_Ability_Drow_Ranger_Glacier : public CDOTABaseAbility /*0x0*/  // sizeof 0x5F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 shard_width; // offset 0x580, size 0x4, align 4
    int32 shard_count; // offset 0x584, size 0x4, align 4
    float32 shard_duration; // offset 0x588, size 0x4, align 4
    float32 shard_angle_step; // offset 0x58C, size 0x4, align 4
    int32 shard_distance; // offset 0x590, size 0x4, align 4
    VectorWS m_vSpawnOrigin; // offset 0x594, size 0xC, align 4
    Vector m_vDirection; // offset 0x5A0, size 0xC, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
    CUtlVector< CHandle< CBaseEntity > > m_vecShards; // offset 0x5B0, size 0x18, align 8
    char _pad_05C8[0x8]; // offset 0x5C8
    CDOTABaseAbility* m_pIceShardsStop; // offset 0x5D0, size 0x8, align 8
    char _pad_05D8[0x14]; // offset 0x5D8
    ParticleIndex_t m_nFXIndex; // offset 0x5EC, size 0x4, align 255
};
