#pragma once

class CDOTA_Ability_Meepo_Poof : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x824, size 0x4, align 255
    char _pad_0828[0x14]; // offset 0x828
    float32 radius; // offset 0x83C, size 0x4, align 4
};
