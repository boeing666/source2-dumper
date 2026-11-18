#pragma once

class C_DOTA_Ability_Naga_Siren_Reel_In : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 m_flLongestEnsnareDuration; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
    CUtlVector< CHandle< C_BaseEntity > > affectedEntities; // offset 0x830, size 0x18, align 8
};
