#pragma once

class CCitadel_Ability_Tier2Boss_AoEWaveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1598, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_strAOEImpactSound; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAOEAnnounceSound; // offset 0x1570, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flCastCompleteToAttackTime; // offset 0x1590, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1594[0x4]; // offset 0x1594
};
