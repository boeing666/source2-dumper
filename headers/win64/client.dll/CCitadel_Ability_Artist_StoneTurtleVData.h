#pragma once

class CCitadel_Ability_Artist_StoneTurtleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SplashParticle; // offset 0x1240, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strInitialImpactSound; // offset 0x1330, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSplashSound; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1350, size 0x10, align 8
    float32 m_flInitialVerticalOffset; // offset 0x1360, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1364[0x4]; // offset 0x1364
};
