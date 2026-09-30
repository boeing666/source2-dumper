#pragma once

class CCitadel_Ability_Frank_ShockTarget2VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1760, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CSoundEventName m_ShockShootSound; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ShockImpactSound; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShockImpactParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x14A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShockReadyParticle; // offset 0x1580, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1660, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1740, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FullyChargedFXModifier; // offset 0x1750, size 0x10, align 8
};
