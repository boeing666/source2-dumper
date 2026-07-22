#pragma once

class CDOTA_Ability_Magnataur_ReversePolarity : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x6A8, size 0x4, align 255
    VectorWS m_vPullLocation; // offset 0x6AC, size 0xC, align 4
    float32 push_radius; // offset 0x6B8, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x6BC, size 0x4, align 4
    float32 pull_radius; // offset 0x6C0, size 0x4, align 4
    float32 flEffectRadius; // offset 0x6C4, size 0x4, align 4
};
