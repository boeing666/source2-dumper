#pragma once

class CDOTA_Ability_Nian_Apocalypse : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 area_of_effect; // offset 0x85C, size 0x4, align 4
    ParticleIndex_t m_nfxIndex_roar; // offset 0x860, size 0x4, align 255
    float32 fire_interval; // offset 0x864, size 0x4, align 4
    float32 delay; // offset 0x868, size 0x4, align 4
    float32 target_range; // offset 0x86C, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x870, size 0x18, align 8
    float32 m_flTiming; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
