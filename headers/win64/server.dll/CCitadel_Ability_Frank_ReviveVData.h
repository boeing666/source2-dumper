#pragma once

class CCitadel_Ability_Frank_ReviveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1978, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nDeathMarkParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHitParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletImpactParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletTracerParticle; // offset 0x1848, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strElectricBulletHitSound; // offset 0x1938, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RevivingModifier; // offset 0x1948, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1958, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DashSlowModifier; // offset 0x1968, size 0x10, align 8
};
