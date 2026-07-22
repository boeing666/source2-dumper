#pragma once

class C_DOTA_Ability_Nian_Whirlpool : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 pool_count; // offset 0x824, size 0x4, align 4
    int32 min_distance; // offset 0x828, size 0x4, align 4
    int32 max_distance; // offset 0x82C, size 0x4, align 4
    int32 pull_radius; // offset 0x830, size 0x4, align 4
    float32 fire_interval; // offset 0x834, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x838, size 0x18, align 8
    float32 m_flTiming; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
};
