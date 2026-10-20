#pragma once

class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flResupplyForceScale; // offset 0x1070, size 0x4, align 4
    float32 m_flResupplyUp; // offset 0x1074, size 0x4, align 4
    CSoundEventName m_strKilledSound; // offset 0x1078, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeploySound; // offset 0x1088, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x1098, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // offset 0x10A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // offset 0x1188, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticleFriendly; // offset 0x1268, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // offset 0x1348, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x1428, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticleFriendly; // offset 0x1508, size 0xE0, align 8
};
