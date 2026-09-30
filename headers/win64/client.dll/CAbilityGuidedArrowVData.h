#pragma once

class CAbilityGuidedArrowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // offset 0x13A0, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // offset 0x1428, size 0x88, align 8
    float32 m_flCameraHoldAtExplosion; // offset 0x14B0, size 0x4, align 4
    float32 m_flFadeIn; // offset 0x14B4, size 0x4, align 4
    float32 m_flFadeHoldTime; // offset 0x14B8, size 0x4, align 4
    float32 m_flFadeOut; // offset 0x14BC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x14C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x15A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // offset 0x1680, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1760, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1840, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1844, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1848, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x184C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1850, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1860, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1870, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1880, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1890, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1894, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1898, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x189C, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x18A0, size 0x4, align 4
    float32 m_flArrowModelTurnSpringStrength; // offset 0x18A4, size 0x4, align 4
    float32 m_flKillCheckWindow; // offset 0x18A8, size 0x4, align 4
    float32 m_flWorldCollideGraceWindow; // offset 0x18AC, size 0x4, align 4
};
