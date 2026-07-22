#pragma once

class CDOTA_Ability_Techies_Minefield_Sign : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x824, size 0x4, align 255
    ParticleIndex_t m_nFXHammerIndex; // offset 0x828, size 0x4, align 255
    int32 aura_radius; // offset 0x82C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSign; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
