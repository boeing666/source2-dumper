#pragma once

class CDOTA_Ability_Techies_Minefield_Sign : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    ParticleIndex_t m_nFXHammerIndex; // offset 0x584, size 0x4, align 255
    int32 aura_radius; // offset 0x588, size 0x4, align 4
    CHandle< CBaseEntity > m_hSign; // offset 0x58C, size 0x4, align 4
};
