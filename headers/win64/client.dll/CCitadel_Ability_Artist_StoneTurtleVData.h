#pragma once

class CCitadel_Ability_Artist_StoneTurtleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SplashParticle; // offset 0x15A8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strInitialImpactSound; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSplashSound; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x16B8, size 0x10, align 8
    float32 m_flInitialVerticalOffset; // offset 0x16C8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16CC[0x4]; // offset 0x16CC
};
