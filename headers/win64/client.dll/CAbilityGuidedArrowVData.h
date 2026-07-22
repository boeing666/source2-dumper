#pragma once

class CAbilityGuidedArrowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // offset 0x1818, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // offset 0x18A0, size 0x88, align 8
    float32 m_flCameraHoldAtExplosion; // offset 0x1928, size 0x4, align 4
    float32 m_flFadeIn; // offset 0x192C, size 0x4, align 4
    float32 m_flFadeHoldTime; // offset 0x1930, size 0x4, align 4
    float32 m_flFadeOut; // offset 0x1934, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1938, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1A18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // offset 0x1AF8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1BD8, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1CB8, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1CBC, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1CC0, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x1CC4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1CC8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1CD8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1CE8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1CF8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1D08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1D0C, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1D10, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x1D14, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1D18, size 0x4, align 4
    float32 m_flArrowModelTurnSpringStrength; // offset 0x1D1C, size 0x4, align 4
    float32 m_flKillCheckWindow; // offset 0x1D20, size 0x4, align 4
    float32 m_flWorldCollideGraceWindow; // offset 0x1D24, size 0x4, align 4
};
