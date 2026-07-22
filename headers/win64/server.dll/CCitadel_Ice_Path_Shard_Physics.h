#pragma once

class CCitadel_Ice_Path_Shard_Physics : public CBaseModelEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server) {MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    ice_path_shard_model_desc_t m_ShardDesc; // offset 0x780, size 0x38, align 255 | MNetworkEnable
    QAngle m_qForward; // offset 0x7B8, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_flStartTime; // offset 0x7C4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flEndTime; // offset 0x7C8, size 0x4, align 255 | MNetworkEnable
    float32 m_flShardWidth; // offset 0x7CC, size 0x4, align 4 | MNetworkEnable
    char _pad_07D0[0x8]; // offset 0x7D0
};
