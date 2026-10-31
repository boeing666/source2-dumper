#pragma once

class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flResupplyForceScale; // offset 0x1080, size 0x4, align 4
    float32 m_flResupplyUp; // offset 0x1084, size 0x4, align 4
    CSoundEventName m_strKilledSound; // offset 0x1088, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeploySound; // offset 0x1098, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x10A8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // offset 0x10B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // offset 0x1198, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticleFriendly; // offset 0x1278, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // offset 0x1358, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x1438, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticleFriendly; // offset 0x1518, size 0xE0, align 8
};
