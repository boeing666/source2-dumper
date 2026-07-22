#pragma once

class CDOTA_Ability_PrimalBeast_Rock_Throw : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 base_damage; // offset 0x6A8, size 0x4, align 4
    float32 impact_radius; // offset 0x6AC, size 0x4, align 4
    float32 fragment_impact_radius; // offset 0x6B0, size 0x4, align 4
    int32 fragment_impact_distance; // offset 0x6B4, size 0x4, align 4
    int32 min_range; // offset 0x6B8, size 0x4, align 4
    float32 stun_duration; // offset 0x6BC, size 0x4, align 4
    ParticleIndex_t m_nFXPreview; // offset 0x6C0, size 0x4, align 255
    char _pad_06C4[0x4]; // offset 0x6C4
};
