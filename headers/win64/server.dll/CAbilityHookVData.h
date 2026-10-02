#pragma once

class CAbilityHookVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrecastHookParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookServerImpactParticle; // offset 0x16B8, size 0xE0, align 8
    CSoundEventName m_strHookSuccessSound; // offset 0x1798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHookNPCSound; // offset 0x17A8, size 0x10, align 8
    CSoundEventName m_strHookAllySound; // offset 0x17B8, size 0x10, align 8
    CSoundEventName m_strHookImpactGeoSound; // offset 0x17C8, size 0x10, align 8
    float32 m_flTrooperHitRadius; // offset 0x17D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFriendlyHookIgnoreRange; // offset 0x17DC, size 0x4, align 4
};
