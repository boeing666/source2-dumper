#pragma once

class C_DOTA_Ability_DeathProphet_Exorcism : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< sSpiritInfo* > m_SpiritInfos; // offset 0x6A8, size 0x18, align 8
};
