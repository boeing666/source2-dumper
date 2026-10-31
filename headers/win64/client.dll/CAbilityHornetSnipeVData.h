#pragma once

class CAbilityHornetSnipeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1480, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1320, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // offset 0x1400, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_GlowEnemyModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x1430, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1440, size 0x10, align 8
    float32 m_flMinScopeTimeToShoot; // offset 0x1450, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFadeToBlackTime; // offset 0x1454, size 0x4, align 4
    float32 m_flFoVChangeTime; // offset 0x1458, size 0x4, align 4
    char _pad_145C[0x4]; // offset 0x145C
    CUtlVector< float32 > m_ScopeFoV; // offset 0x1460, size 0x18, align 8
    float32 m_flKillCheckDuration; // offset 0x1478, size 0x4, align 4
    char _pad_147C[0x4]; // offset 0x147C
};
