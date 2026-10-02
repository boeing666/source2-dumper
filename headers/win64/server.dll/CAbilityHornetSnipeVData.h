#pragma once

class CAbilityHornetSnipeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1688, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // offset 0x1768, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // offset 0x1778, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1788, size 0x10, align 8
    CSoundEventName m_strSnipeImpactSound; // offset 0x1798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZoomIn; // offset 0x17A8, size 0x10, align 8
    CSoundEventName m_strZoomOut; // offset 0x17B8, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x17C8, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x17D8, size 0x10, align 8
    float32 m_flMinScopeTimeToShoot; // offset 0x17E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFadeToBlackTime; // offset 0x17EC, size 0x4, align 4
    float32 m_flFoVChangeTime; // offset 0x17F0, size 0x4, align 4
    char _pad_17F4[0x4]; // offset 0x17F4
    CUtlVector< float32 > m_ScopeFoV; // offset 0x17F8, size 0x18, align 8
    float32 m_flKillCheckDuration; // offset 0x1810, size 0x4, align 4
    char _pad_1814[0x4]; // offset 0x1814
};
