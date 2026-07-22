#pragma once

class CDOTA_Ability_Rattletrap_RocketFlare : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecEnemyHeroesInFog; // offset 0x860, size 0x18, align 8
};
