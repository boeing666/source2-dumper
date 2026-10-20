#pragma once

class CAbilityGuidedArrowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // offset 0x1070, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // offset 0x1110, size 0xA0, align 8
    float32 m_flCameraHoldAtExplosion; // offset 0x11B0, size 0x4, align 4
    float32 m_flFadeIn; // offset 0x11B4, size 0x4, align 4
    float32 m_flFadeHoldTime; // offset 0x11B8, size 0x4, align 4
    float32 m_flFadeOut; // offset 0x11BC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x11C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x12A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // offset 0x1380, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1460, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1540, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1544, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1548, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x154C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1550, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1560, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1580, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1590, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1594, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1598, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x159C, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x15A0, size 0x4, align 4
    float32 m_flArrowModelTurnSpringStrength; // offset 0x15A4, size 0x4, align 4
    float32 m_flKillCheckWindow; // offset 0x15A8, size 0x4, align 4
    float32 m_flWorldCollideGraceWindow; // offset 0x15AC, size 0x4, align 4
};
