#pragma once

class CDOTA_Ability_Meepo_Poof : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    char _pad_0860[0x14]; // offset 0x860
    float32 radius; // offset 0x874, size 0x4, align 4
};
