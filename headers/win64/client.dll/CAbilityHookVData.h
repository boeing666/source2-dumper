#pragma once

class CAbilityHookVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrecastHookParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookServerImpactParticle; // offset 0x1340, size 0xE0, align 8
    CSoundEventName m_strHookSuccessSound; // offset 0x1420, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHookNPCSound; // offset 0x1430, size 0x10, align 8
    CSoundEventName m_strHookAllySound; // offset 0x1440, size 0x10, align 8
    CSoundEventName m_strHookImpactGeoSound; // offset 0x1450, size 0x10, align 8
    float32 m_flTrooperHitRadius; // offset 0x1460, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFriendlyHookIgnoreRange; // offset 0x1464, size 0x4, align 4
};
