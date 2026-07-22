#pragma once

class CDOTA_Ability_Nian_Hurricane : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 min_distance; // offset 0x580, size 0x4, align 4
    int32 max_distance; // offset 0x584, size 0x4, align 4
    int32 torrent_count; // offset 0x588, size 0x4, align 4
    float32 fire_interval; // offset 0x58C, size 0x4, align 4
    float32 pull_switch_interval; // offset 0x590, size 0x4, align 4
    float32 game_time_wind_activation; // offset 0x594, size 0x4, align 4
    CountdownTimer m_ctPullTimer; // offset 0x598, size 0x18, align 8
    CountdownTimer m_ctTimer; // offset 0x5B0, size 0x18, align 8
    float32 m_flTiming; // offset 0x5C8, size 0x4, align 4
    bool m_bForward; // offset 0x5CC, size 0x1, align 1
    bool m_bUseWind; // offset 0x5CD, size 0x1, align 1
    char _pad_05CE[0x2]; // offset 0x5CE
    ParticleIndex_t m_nFXIndex; // offset 0x5D0, size 0x4, align 255
    ParticleIndex_t m_nfxIndex_roar; // offset 0x5D4, size 0x4, align 255
};
