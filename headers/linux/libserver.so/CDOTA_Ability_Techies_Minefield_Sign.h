#pragma once

class CDOTA_Ability_Techies_Minefield_Sign : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    ParticleIndex_t m_nFXHammerIndex; // offset 0x860, size 0x4, align 255
    int32 aura_radius; // offset 0x864, size 0x4, align 4
    CHandle< CBaseEntity > m_hSign; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x4]; // offset 0x86C
};
