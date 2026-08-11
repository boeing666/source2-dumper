#pragma once

class CDOTA_Ability_Magnataur_ReversePolarity : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    VectorWS m_vPullLocation; // offset 0x860, size 0xC, align 4
    float32 push_radius; // offset 0x86C, size 0x4, align 4
    float32 max_knockback_distance; // offset 0x870, size 0x4, align 4
    float32 pull_radius; // offset 0x874, size 0x4, align 4
    float32 flEffectRadius; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
