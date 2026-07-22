#pragma once

class CDOTA_Ability_PrimalBeast_Rock_Throw : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 base_damage; // offset 0x824, size 0x4, align 4
    float32 impact_radius; // offset 0x828, size 0x4, align 4
    float32 fragment_impact_radius; // offset 0x82C, size 0x4, align 4
    int32 fragment_impact_distance; // offset 0x830, size 0x4, align 4
    int32 min_range; // offset 0x834, size 0x4, align 4
    float32 stun_duration; // offset 0x838, size 0x4, align 4
    ParticleIndex_t m_nFXPreview; // offset 0x83C, size 0x4, align 255
};
