#pragma once

class CShatterGlassShardPhysics : public CBaseModelEntity /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    uint32 m_hParentShard; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
    shard_model_desc_t m_ShardDesc; // offset 0x858, size 0x80, align 255
    ShatterGlassEntityPoolState_t m_nPoolState; // offset 0x8D8, size 0x4, align 4
    bool m_bTouchedByPlayer; // offset 0x8DC, size 0x1, align 1
    char _pad_08DD[0x3]; // offset 0x8DD
};
