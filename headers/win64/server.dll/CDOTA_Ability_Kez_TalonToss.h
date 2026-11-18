#pragma once

class CDOTA_Ability_Kez_TalonToss : public CDOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x588]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecAlreadyBouncedUnits; // offset 0x588, size 0x18, align 8
};
