#pragma once

class CDOTA_Ability_Magnataur_ReversePolarity : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    VectorWS m_vPullLocation; // offset 0x584, size 0xC, align 4
    float32 push_radius; // offset 0x590, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x594, size 0x4, align 4
    float32 pull_radius; // offset 0x598, size 0x4, align 4
    float32 flEffectRadius; // offset 0x59C, size 0x4, align 4
};
