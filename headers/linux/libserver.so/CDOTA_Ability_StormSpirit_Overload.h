#pragma once

class CDOTA_Ability_StormSpirit_Overload : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_iAttackIndex; // offset 0x85C, size 0x4, align 4
    CUtlVector< sGlaiveInfoStorm > m_GlaiveInfo; // offset 0x860, size 0x18, align 8
};
