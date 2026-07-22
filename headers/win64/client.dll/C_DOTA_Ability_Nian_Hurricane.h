#pragma once

class C_DOTA_Ability_Nian_Hurricane : public C_DOTABaseAbility /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 min_distance; // offset 0x6A8, size 0x4, align 4
    int32 max_distance; // offset 0x6AC, size 0x4, align 4
    int32 torrent_count; // offset 0x6B0, size 0x4, align 4
    float32 fire_interval; // offset 0x6B4, size 0x4, align 4
    float32 pull_switch_interval; // offset 0x6B8, size 0x4, align 4
    float32 game_time_wind_activation; // offset 0x6BC, size 0x4, align 4
    CountdownTimer m_ctPullTimer; // offset 0x6C0, size 0x18, align 8
    CountdownTimer m_ctTimer; // offset 0x6D8, size 0x18, align 8
    float32 m_flTiming; // offset 0x6F0, size 0x4, align 4
    bool m_bForward; // offset 0x6F4, size 0x1, align 1
    bool m_bUseWind; // offset 0x6F5, size 0x1, align 1
    char _pad_06F6[0x2]; // offset 0x6F6
    ParticleIndex_t m_nFXIndex; // offset 0x6F8, size 0x4, align 255
    ParticleIndex_t m_nfxIndex_roar; // offset 0x6FC, size 0x4, align 255
};
