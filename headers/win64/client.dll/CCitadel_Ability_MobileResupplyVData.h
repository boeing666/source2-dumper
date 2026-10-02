#pragma once

class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1960, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flResupplyForceScale; // offset 0x13E8, size 0x4, align 4
    float32 m_flResupplyUp; // offset 0x13EC, size 0x4, align 4
    CSoundEventName m_strKilledSound; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDeploySound; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x1410, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // offset 0x1420, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // offset 0x1500, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticleFriendly; // offset 0x15E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // offset 0x16C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x17A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticleFriendly; // offset 0x1880, size 0xE0, align 8
};
