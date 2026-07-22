#pragma once

class CDOTA_Ability_EmberSpirit_SleightOfFist : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vCastLoc; // offset 0x580, size 0xC, align 4
    int32 m_nHeroesKilled; // offset 0x58C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackEntities; // offset 0x590, size 0x18, align 8
    ParticleIndex_t m_nFXMarkerIndex; // offset 0x5A8, size 0x4, align 255
    CHandle< CBaseEntity > m_hDoubleHitEntity; // offset 0x5AC, size 0x4, align 4
};
