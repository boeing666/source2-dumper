#pragma once

class CDOTA_Ability_PrimalBeast_Rock_Throw : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 base_damage; // offset 0x580, size 0x4, align 4
    float32 impact_radius; // offset 0x584, size 0x4, align 4
    float32 fragment_impact_radius; // offset 0x588, size 0x4, align 4
    int32 fragment_impact_distance; // offset 0x58C, size 0x4, align 4
    int32 min_range; // offset 0x590, size 0x4, align 4
    float32 stun_duration; // offset 0x594, size 0x4, align 4
    ParticleIndex_t m_nFXPreview; // offset 0x598, size 0x4, align 255
    char _pad_059C[0x14]; // offset 0x59C
};
