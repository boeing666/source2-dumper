#pragma once

class CCitadel_Ability_Ratking_ScrapGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BigExplosionSlowModifier; // offset 0x1080, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBigExplodeSound; // offset 0x10A0, size 0x10, align 8
    CSoundEventName m_BounceSound; // offset 0x10B0, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x10C0, size 0x10, align 8
    CSoundEventName m_strExtraTimerSound; // offset 0x10D0, size 0x10, align 8
    CSoundEventName m_strMeleeHitSound; // offset 0x10E0, size 0x10, align 8
    float32 m_flBounceVerticalDampening; // offset 0x10F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBounceDirectionalDampening; // offset 0x10F4, size 0x4, align 4
    float32 m_flMinBounceSpeed; // offset 0x10F8, size 0x4, align 4
    float32 m_flMinSurfaceDotToBounce; // offset 0x10FC, size 0x4, align 4
    float32 m_flMaxSurfaceDotToBounce; // offset 0x1100, size 0x4, align 4
    float32 m_flBounceTargetingPlayerWeight; // offset 0x1104, size 0x4, align 4
    float32 m_flBounceTargetDistancePower; // offset 0x1108, size 0x4, align 4
    float32 m_flBounceMaxHorizontalSpeed; // offset 0x110C, size 0x4, align 4
    float32 m_flBounceUpMagnitude; // offset 0x1110, size 0x4, align 4
    float32 m_flMinTimeBetweenExplosions; // offset 0x1114, size 0x4, align 4
    float32 m_flBounceTargetDistanceCheck; // offset 0x1118, size 0x4, align 4
    float32 m_flFirstBounceDetonateTimer; // offset 0x111C, size 0x4, align 4
    float32 m_flAdditionalBounceDetonateTimer; // offset 0x1120, size 0x4, align 4
    float32 m_flFinalBounceDetonateTimer; // offset 0x1124, size 0x4, align 4
    float32 m_flBounceGrenadeSpeed; // offset 0x1128, size 0x4, align 4
    float32 m_flMeleeImpulseLight; // offset 0x112C, size 0x4, align 4
    float32 m_flMeleeImpulseHeavy; // offset 0x1130, size 0x4, align 4
    float32 m_flMeleeImpulseUpScale; // offset 0x1134, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShrapnelTracer; // offset 0x1138, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1218, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x12F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConeParticle; // offset 0x13D8, size 0xE0, align 8
};
