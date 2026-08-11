#pragma once

class CDOTA_Ability_PrimalBeast_Rock_Throw : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 base_damage; // offset 0x85C, size 0x4, align 4
    float32 impact_radius; // offset 0x860, size 0x4, align 4
    float32 fragment_impact_radius; // offset 0x864, size 0x4, align 4
    int32 fragment_impact_distance; // offset 0x868, size 0x4, align 4
    int32 min_range; // offset 0x86C, size 0x4, align 4
    float32 stun_duration; // offset 0x870, size 0x4, align 4
    ParticleIndex_t m_nFXPreview; // offset 0x874, size 0x4, align 255
    char _pad_0878[0x18]; // offset 0x878
};
