#pragma once

class CAbilityHookVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrecastHookParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookServerImpactParticle; // offset 0x1AE8, size 0xE0, align 8
    CSoundEventName m_strHookSuccessSound; // offset 0x1BC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHookNPCSound; // offset 0x1BD8, size 0x10, align 8
    CSoundEventName m_strHookAllySound; // offset 0x1BE8, size 0x10, align 8
    CSoundEventName m_strHookImpactGeoSound; // offset 0x1BF8, size 0x10, align 8
    float32 m_flTrooperHitRadius; // offset 0x1C08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFriendlyHookIgnoreRange; // offset 0x1C0C, size 0x4, align 4
};
