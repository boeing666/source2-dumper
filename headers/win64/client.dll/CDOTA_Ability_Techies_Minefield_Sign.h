#pragma once

class CDOTA_Ability_Techies_Minefield_Sign : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x6A8, size 0x4, align 255
    ParticleIndex_t m_nFXHammerIndex; // offset 0x6AC, size 0x4, align 255
    int32 aura_radius; // offset 0x6B0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSign; // offset 0x6B4, size 0x4, align 4
};
