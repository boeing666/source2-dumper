#pragma once

class CDOTA_Ability_EnragedWildkin_Tornado : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hTornado; // offset 0x85C, size 0x4, align 4
    CHandle< CBaseEntity > m_hNeutralTarget; // offset 0x860, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x864, size 0x4, align 255
};
