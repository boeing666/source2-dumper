#pragma once

class CCitadel_Ability_Frank_ShockTarget2VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CSoundEventName m_ShockShootSound; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ShockImpactSound; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShockImpactParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x14E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShockReadyParticle; // offset 0x15C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x16A8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1788, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FullyChargedFXModifier; // offset 0x1798, size 0x10, align 8
};
