#pragma once

class CDOTA_Ability_EnragedWildkin_Tornado : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hTornado; // offset 0x580, size 0x4, align 4
    CHandle< CBaseEntity > m_hNeutralTarget; // offset 0x584, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x588, size 0x4, align 255
    char _pad_058C[0x4]; // offset 0x58C
};
