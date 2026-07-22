#pragma once

class C_DOTA_Ability_Naga_Siren_Reel_In : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 m_flLongestEnsnareDuration; // offset 0x824, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > affectedEntities; // offset 0x828, size 0x18, align 8
};
