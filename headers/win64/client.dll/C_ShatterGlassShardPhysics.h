#pragma once

class C_ShatterGlassShardPhysics : public C_PhysicsProp /*0x0*/  // sizeof 0xEC0, align 0x10 [vtable] (client) {MNetworkExcludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xE38]; // offset 0x0
    shard_model_desc_t m_ShardDesc; // offset 0xE38, size 0x80, align 255 | MNetworkEnable MNotSaved
    char _pad_0EB8[0x8]; // offset 0xEB8
};
