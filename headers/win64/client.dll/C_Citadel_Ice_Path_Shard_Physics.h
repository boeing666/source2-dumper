#pragma once

class C_Citadel_Ice_Path_Shard_Physics : public C_BaseModelEntity /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (client) {MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    ice_path_shard_model_desc_t m_ShardDesc; // offset 0x9A8, size 0x38, align 255 | MNetworkEnable MNotSaved
    QAngle m_qForward; // offset 0x9E0, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flStartTime; // offset 0x9EC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flEndTime; // offset 0x9F0, size 0x4, align 255 | MNetworkEnable
    float32 m_flShardWidth; // offset 0x9F4, size 0x4, align 4 | MNetworkEnable
};
