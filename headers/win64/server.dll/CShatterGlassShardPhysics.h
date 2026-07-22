#pragma once

class CShatterGlassShardPhysics : public CPhysicsProp /*0x0*/  // sizeof 0xDF0, align 0x10 [vtable] (server) {MNetworkExcludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    bool m_bDebris; // offset 0xD60, size 0x1, align 1
    char _pad_0D61[0x3]; // offset 0xD61
    uint32 m_hParentShard; // offset 0xD64, size 0x4, align 4
    shard_model_desc_t m_ShardDesc; // offset 0xD68, size 0x80, align 255 | MNetworkEnable
    char _pad_0DE8[0x8]; // offset 0xDE8
};
