#pragma once

class CDOTA_Ability_Nian_Hurricane : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 min_distance; // offset 0x85C, size 0x4, align 4
    int32 max_distance; // offset 0x860, size 0x4, align 4
    int32 torrent_count; // offset 0x864, size 0x4, align 4
    float32 fire_interval; // offset 0x868, size 0x4, align 4
    float32 pull_switch_interval; // offset 0x86C, size 0x4, align 4
    float32 game_time_wind_activation; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
    CountdownTimer m_ctPullTimer; // offset 0x878, size 0x18, align 8
    CountdownTimer m_ctTimer; // offset 0x890, size 0x18, align 8
    float32 m_flTiming; // offset 0x8A8, size 0x4, align 4
    bool m_bForward; // offset 0x8AC, size 0x1, align 1
    bool m_bUseWind; // offset 0x8AD, size 0x1, align 1
    char _pad_08AE[0x2]; // offset 0x8AE
    ParticleIndex_t m_nFXIndex; // offset 0x8B0, size 0x4, align 255
    ParticleIndex_t m_nfxIndex_roar; // offset 0x8B4, size 0x4, align 255
};
