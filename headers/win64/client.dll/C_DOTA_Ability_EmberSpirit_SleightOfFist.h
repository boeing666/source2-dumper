#pragma once

class C_DOTA_Ability_EmberSpirit_SleightOfFist : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vCastLoc; // offset 0x6A8, size 0xC, align 4
    int32 m_nHeroesKilled; // offset 0x6B4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackEntities; // offset 0x6B8, size 0x18, align 8
    ParticleIndex_t m_nFXMarkerIndex; // offset 0x6D0, size 0x4, align 255
    char _pad_06D4[0x4]; // offset 0x6D4
};
