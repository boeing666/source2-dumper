#pragma once

class CAbilityGuidedArrowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // offset 0x13E8, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // offset 0x1488, size 0xA0, align 8
    float32 m_flCameraHoldAtExplosion; // offset 0x1528, size 0x4, align 4
    float32 m_flFadeIn; // offset 0x152C, size 0x4, align 4
    float32 m_flFadeHoldTime; // offset 0x1530, size 0x4, align 4
    float32 m_flFadeOut; // offset 0x1534, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1538, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1618, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // offset 0x16F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x17D8, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x18B8, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x18BC, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x18C0, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x18C4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x18C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x18D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x18E8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x18F8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1908, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x190C, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1910, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x1914, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1918, size 0x4, align 4
    float32 m_flArrowModelTurnSpringStrength; // offset 0x191C, size 0x4, align 4
    float32 m_flKillCheckWindow; // offset 0x1920, size 0x4, align 4
    float32 m_flWorldCollideGraceWindow; // offset 0x1924, size 0x4, align 4
};
