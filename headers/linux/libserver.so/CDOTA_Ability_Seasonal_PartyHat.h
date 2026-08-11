#pragma once

class CDOTA_Ability_Seasonal_PartyHat : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecParticles; // offset 0x860, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAffectedEntities; // offset 0x878, size 0x18, align 8
    int32 m_nAllyCount; // offset 0x890, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x894, size 0xC, align 4
};
