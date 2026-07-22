#pragma once

class C_DOTA_Ability_NagaSiren_MirrorImage : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hIllusions; // offset 0x828, size 0x18, align 8
};
