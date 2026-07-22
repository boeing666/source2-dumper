#pragma once

class C_DOTA_Ability_Nian_Apocalypse : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 area_of_effect; // offset 0x6A8, size 0x4, align 4
    ParticleIndex_t m_nfxIndex_roar; // offset 0x6AC, size 0x4, align 255
    float32 fire_interval; // offset 0x6B0, size 0x4, align 4
    float32 delay; // offset 0x6B4, size 0x4, align 4
    float32 target_range; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
    CountdownTimer m_ctTimer; // offset 0x6C0, size 0x18, align 8
    float32 m_flTiming; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
};
