#pragma once

class CDOTA_Ability_Nian_Whirlpool : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 pool_count; // offset 0x85C, size 0x4, align 4
    int32 min_distance; // offset 0x860, size 0x4, align 4
    int32 max_distance; // offset 0x864, size 0x4, align 4
    int32 pull_radius; // offset 0x868, size 0x4, align 4
    float32 fire_interval; // offset 0x86C, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x870, size 0x18, align 8
    float32 m_flTiming; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
