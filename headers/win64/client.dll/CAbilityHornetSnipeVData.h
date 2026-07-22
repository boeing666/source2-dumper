#pragma once

class CAbilityHornetSnipeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1AB8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // offset 0x1B98, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // offset 0x1BA8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strSnipeImpactSound; // offset 0x1BC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZoomIn; // offset 0x1BD8, size 0x10, align 8
    CSoundEventName m_strZoomOut; // offset 0x1BE8, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x1BF8, size 0x10, align 8
    float32 m_flMinScopeTimeToShoot; // offset 0x1C08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFadeToBlackTime; // offset 0x1C0C, size 0x4, align 4
    float32 m_flFoVChangeTime; // offset 0x1C10, size 0x4, align 4
    char _pad_1C14[0x4]; // offset 0x1C14
    CUtlVector< float32 > m_ScopeFoV; // offset 0x1C18, size 0x18, align 8
    float32 m_flKillCheckDuration; // offset 0x1C30, size 0x4, align 4
    char _pad_1C34[0x4]; // offset 0x1C34
};
