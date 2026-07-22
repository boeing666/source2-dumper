#pragma once

class CDOTA_Ability_Nian_Whirlpool : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 pool_count; // offset 0x580, size 0x4, align 4
    int32 min_distance; // offset 0x584, size 0x4, align 4
    int32 max_distance; // offset 0x588, size 0x4, align 4
    int32 pull_radius; // offset 0x58C, size 0x4, align 4
    float32 fire_interval; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
    CountdownTimer m_ctTimer; // offset 0x598, size 0x18, align 8
    float32 m_flTiming; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
