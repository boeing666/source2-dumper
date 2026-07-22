#pragma once

class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flResupplyForceScale; // offset 0x1818, size 0x4, align 4
    float32 m_flResupplyUp; // offset 0x181C, size 0x4, align 4
    CSoundEventName m_strKilledSound; // offset 0x1820, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeploySound; // offset 0x1830, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x1840, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // offset 0x1850, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // offset 0x1930, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // offset 0x1A10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x1AF0, size 0xE0, align 8
};
