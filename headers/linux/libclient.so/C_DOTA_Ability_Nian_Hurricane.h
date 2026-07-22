#pragma once

class C_DOTA_Ability_Nian_Hurricane : public C_DOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 min_distance; // offset 0x824, size 0x4, align 4
    int32 max_distance; // offset 0x828, size 0x4, align 4
    int32 torrent_count; // offset 0x82C, size 0x4, align 4
    float32 fire_interval; // offset 0x830, size 0x4, align 4
    float32 pull_switch_interval; // offset 0x834, size 0x4, align 4
    float32 game_time_wind_activation; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
    CountdownTimer m_ctPullTimer; // offset 0x840, size 0x18, align 8
    CountdownTimer m_ctTimer; // offset 0x858, size 0x18, align 8
    float32 m_flTiming; // offset 0x870, size 0x4, align 4
    bool m_bForward; // offset 0x874, size 0x1, align 1
    bool m_bUseWind; // offset 0x875, size 0x1, align 1
    char _pad_0876[0x2]; // offset 0x876
    ParticleIndex_t m_nFXIndex; // offset 0x878, size 0x4, align 255
    ParticleIndex_t m_nfxIndex_roar; // offset 0x87C, size 0x4, align 255
};
