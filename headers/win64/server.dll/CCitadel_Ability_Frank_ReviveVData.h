#pragma once

class CCitadel_Ability_Frank_ReviveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1930, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nDeathMarkParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHitParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletImpactParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletTracerParticle; // offset 0x1800, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x18E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strElectricBulletHitSound; // offset 0x18F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RevivingModifier; // offset 0x1900, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1910, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DashSlowModifier; // offset 0x1920, size 0x10, align 8
};
