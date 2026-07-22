#pragma once

class C_DOTA_Ability_StormSpirit_Overload : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_iAttackIndex; // offset 0x824, size 0x4, align 4
    CUtlVector< sGlaiveInfoStorm > m_GlaiveInfo; // offset 0x828, size 0x18, align 8
};
