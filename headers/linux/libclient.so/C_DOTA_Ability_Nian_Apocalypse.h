#pragma once

class C_DOTA_Ability_Nian_Apocalypse : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 area_of_effect; // offset 0x824, size 0x4, align 4
    ParticleIndex_t m_nfxIndex_roar; // offset 0x828, size 0x4, align 255
    float32 fire_interval; // offset 0x82C, size 0x4, align 4
    float32 delay; // offset 0x830, size 0x4, align 4
    float32 target_range; // offset 0x834, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x838, size 0x18, align 8
    float32 m_flTiming; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
};
