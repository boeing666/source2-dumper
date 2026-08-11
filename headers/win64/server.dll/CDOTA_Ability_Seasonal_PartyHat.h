#pragma once

class CDOTA_Ability_Seasonal_PartyHat : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecParticles; // offset 0x580, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAffectedEntities; // offset 0x598, size 0x18, align 8
    int32 m_nAllyCount; // offset 0x5B0, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x5B4, size 0xC, align 4
};
