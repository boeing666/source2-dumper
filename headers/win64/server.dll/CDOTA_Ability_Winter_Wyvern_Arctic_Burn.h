#pragma once

class CDOTA_Ability_Winter_Wyvern_Arctic_Burn : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CEntityIndex > m_BurnedTargets; // offset 0x580, size 0x18, align 8
};
