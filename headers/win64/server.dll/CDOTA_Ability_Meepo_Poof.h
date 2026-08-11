#pragma once

class CDOTA_Ability_Meepo_Poof : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    char _pad_0584[0x14]; // offset 0x584
    float32 radius; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
};
