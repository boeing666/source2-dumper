#pragma once

class CCitadel_Ability_Artist_StoneTurtleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1358, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SplashParticle; // offset 0x1230, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strInitialImpactSound; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSplashSound; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1340, size 0x10, align 8
    float32 m_flInitialVerticalOffset; // offset 0x1350, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1354[0x4]; // offset 0x1354
};
