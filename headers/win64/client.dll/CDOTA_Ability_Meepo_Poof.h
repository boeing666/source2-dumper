#pragma once

class CDOTA_Ability_Meepo_Poof : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x6A8, size 0x4, align 255
    char _pad_06AC[0x14]; // offset 0x6AC
    float32 radius; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
};
