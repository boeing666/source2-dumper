#pragma once

class CCitadel_Ability_Ratking_ScrapGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1810, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BigExplosionSlowModifier; // offset 0x13F8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBigExplodeSound; // offset 0x1418, size 0x10, align 8
    CSoundEventName m_BounceSound; // offset 0x1428, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_strExtraTimerSound; // offset 0x1448, size 0x10, align 8
    CSoundEventName m_strMeleeHitSound; // offset 0x1458, size 0x10, align 8
    float32 m_flBounceVerticalDampening; // offset 0x1468, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBounceDirectionalDampening; // offset 0x146C, size 0x4, align 4
    float32 m_flMinBounceSpeed; // offset 0x1470, size 0x4, align 4
    float32 m_flMinSurfaceDotToBounce; // offset 0x1474, size 0x4, align 4
    float32 m_flMaxSurfaceDotToBounce; // offset 0x1478, size 0x4, align 4
    float32 m_flBounceTargetingPlayerWeight; // offset 0x147C, size 0x4, align 4
    float32 m_flBounceUpMagnitude; // offset 0x1480, size 0x4, align 4
    float32 m_flMinTimeBetweenExplosions; // offset 0x1484, size 0x4, align 4
    float32 m_flBounceTargetDistanceCheck; // offset 0x1488, size 0x4, align 4
    char _pad_148C[0x4]; // offset 0x148C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShrapnelTracer; // offset 0x1490, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1650, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConeParticle; // offset 0x1730, size 0xE0, align 8
};
