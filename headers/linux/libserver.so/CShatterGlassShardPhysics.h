#pragma once

class CShatterGlassShardPhysics : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    uint32 m_hParentShard; // offset 0xB2C, size 0x4, align 4
    shard_model_desc_t m_ShardDesc; // offset 0xB30, size 0x80, align 255
    ShatterGlassEntityPoolState_t m_nPoolState; // offset 0xBB0, size 0x4, align 4
    bool m_bTouchedByPlayer; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0x3]; // offset 0xBB5
};
