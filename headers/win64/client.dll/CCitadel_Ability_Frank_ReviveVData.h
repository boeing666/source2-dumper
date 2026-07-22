#pragma once

class CCitadel_Ability_Frank_ReviveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1DA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nDeathMarkParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHitParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletImpactParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletTracerParticle; // offset 0x1C78, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x1D58, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strElectricBulletHitSound; // offset 0x1D68, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RevivingModifier; // offset 0x1D78, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1D88, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DashSlowModifier; // offset 0x1D98, size 0x10, align 8
};
