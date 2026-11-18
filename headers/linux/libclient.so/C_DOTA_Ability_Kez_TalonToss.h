#pragma once

class C_DOTA_Ability_Kez_TalonToss : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecAlreadyBouncedUnits; // offset 0x830, size 0x18, align 8
};
