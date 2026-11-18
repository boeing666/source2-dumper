#pragma once

class CDOTA_Ability_Meepo_Poof : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x828, size 0x4, align 255
    char _pad_082C[0x14]; // offset 0x82C
    float32 radius; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
