#pragma once

class CCitadel_Ice_Path_Shard_Physics : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    ice_path_shard_model_desc_t m_ShardDesc; // offset 0x878, size 0x38, align 255
    QAngle m_qForward; // offset 0x8B0, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x8BC, size 0x4, align 255
    GameTime_t m_flEndTime; // offset 0x8C0, size 0x4, align 255
    float32 m_flShardWidth; // offset 0x8C4, size 0x4, align 4
    char _pad_08C8[0x8]; // offset 0x8C8
};
