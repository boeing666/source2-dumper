#pragma once

class C_DOTA_Ability_Nian_Whirlpool : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 pool_count; // offset 0x6A8, size 0x4, align 4
    int32 min_distance; // offset 0x6AC, size 0x4, align 4
    int32 max_distance; // offset 0x6B0, size 0x4, align 4
    int32 pull_radius; // offset 0x6B4, size 0x4, align 4
    float32 fire_interval; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
    CountdownTimer m_ctTimer; // offset 0x6C0, size 0x18, align 8
    float32 m_flTiming; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
};
