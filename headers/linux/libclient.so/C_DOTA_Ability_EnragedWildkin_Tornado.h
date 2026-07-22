#pragma once

class C_DOTA_Ability_EnragedWildkin_Tornado : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hTornado; // offset 0x824, size 0x4, align 4
    CHandle< C_BaseEntity > m_hNeutralTarget; // offset 0x828, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x82C, size 0x4, align 255
};
