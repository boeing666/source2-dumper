#pragma once

class C_Citadel_Ice_Path_Shard_Physics : public C_BaseModelEntity /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    ice_path_shard_model_desc_t m_ShardDesc; // offset 0xBB0, size 0x38, align 255 | MNotSaved
    QAngle m_qForward; // offset 0xBE8, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0xBF4, size 0x4, align 255
    GameTime_t m_flEndTime; // offset 0xBF8, size 0x4, align 255
    float32 m_flShardWidth; // offset 0xBFC, size 0x4, align 4
};
