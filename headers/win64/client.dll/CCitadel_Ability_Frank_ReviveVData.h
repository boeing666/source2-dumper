#pragma once

class CCitadel_Ability_Frank_ReviveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1600, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nDeathMarkParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHitParticle; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletImpactParticle; // offset 0x13F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricBulletTracerParticle; // offset 0x14D0, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x15B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strElectricBulletHitSound; // offset 0x15C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RevivingModifier; // offset 0x15D0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x15E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DashSlowModifier; // offset 0x15F0, size 0x10, align 8
};
