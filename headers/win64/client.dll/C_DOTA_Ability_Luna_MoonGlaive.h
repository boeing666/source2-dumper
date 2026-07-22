#pragma once

class C_DOTA_Ability_Luna_MoonGlaive : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iAttackIndex; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
    CUtlVector< sGlaiveInfo > m_GlaiveInfo; // offset 0x6B0, size 0x18, align 8
};
