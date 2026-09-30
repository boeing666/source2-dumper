#pragma once

class CAbilityHornetSnipeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1640, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // offset 0x1720, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // offset 0x1730, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1740, size 0x10, align 8
    CSoundEventName m_strSnipeImpactSound; // offset 0x1750, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZoomIn; // offset 0x1760, size 0x10, align 8
    CSoundEventName m_strZoomOut; // offset 0x1770, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x1780, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1790, size 0x10, align 8
    float32 m_flMinScopeTimeToShoot; // offset 0x17A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFadeToBlackTime; // offset 0x17A4, size 0x4, align 4
    float32 m_flFoVChangeTime; // offset 0x17A8, size 0x4, align 4
    char _pad_17AC[0x4]; // offset 0x17AC
    CUtlVector< float32 > m_ScopeFoV; // offset 0x17B0, size 0x18, align 8
    float32 m_flKillCheckDuration; // offset 0x17C8, size 0x4, align 4
    char _pad_17CC[0x4]; // offset 0x17CC
};
