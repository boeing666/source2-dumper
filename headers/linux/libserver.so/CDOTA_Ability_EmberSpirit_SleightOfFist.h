#pragma once

class CDOTA_Ability_EmberSpirit_SleightOfFist : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vCastLoc; // offset 0x85C, size 0xC, align 4
    int32 m_nHeroesKilled; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x4]; // offset 0x86C
    CUtlVector< CHandle< CBaseEntity > > m_hAttackEntities; // offset 0x870, size 0x18, align 8
    ParticleIndex_t m_nFXMarkerIndex; // offset 0x888, size 0x4, align 255
    CHandle< CBaseEntity > m_hDoubleHitEntity; // offset 0x88C, size 0x4, align 4
};
