#pragma once

class CDOTA_Ability_Magnataur_ReversePolarity : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x824, size 0x4, align 255
    VectorWS m_vPullLocation; // offset 0x828, size 0xC, align 4
    float32 push_radius; // offset 0x834, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x838, size 0x4, align 4
    float32 pull_radius; // offset 0x83C, size 0x4, align 4
    float32 flEffectRadius; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
