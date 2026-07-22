#pragma once

class CCitadel_XPOrbVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bIsObjective; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x7]; // offset 0x29
    CSoundEventName m_strOrbClaimed; // offset 0x30, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strOrbClaimedTeammate; // offset 0x40, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbDenied; // offset 0x50, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbDeniedPlayer; // offset 0x60, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbHitConfirm; // offset 0x70, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbHitPredicted; // offset 0x80, size 0x10, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sOrbModel; // offset 0x90, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPredictedHitLimboGlowParticle; // offset 0x170, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyHitConfirmParticle; // offset 0x250, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyHitConfirmParticle; // offset 0x330, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyGlowParticle; // offset 0x410, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyGlowParticle; // offset 0x4F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGoldReceivedParticle; // offset 0x5D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbDeniedParticle; // offset 0x6B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbDeniedParticle; // offset 0x790, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbEarnedParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbEarnedParticle; // offset 0x950, size 0xE0, align 8
    float32 m_flOrbSpawnDelayMin; // offset 0xA30, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOrbSpawnDelayMax; // offset 0xA34, size 0x4, align 4
    float32 m_flOrbSpawnOffsetZ; // offset 0xA38, size 0x4, align 4
    float32 m_flOrbSpawnOffsetRandomXYZ; // offset 0xA3C, size 0x4, align 4
    float32 m_flGravityScale; // offset 0xA40, size 0x4, align 4
    float32 m_flLateralSpeedMin; // offset 0xA44, size 0x4, align 4
    float32 m_flLateralSpeedMax; // offset 0xA48, size 0x4, align 4
    float32 m_flLateralMoveDuration; // offset 0xA4C, size 0x4, align 4
    float32 m_flUpSpeedMin; // offset 0xA50, size 0x4, align 4
    float32 m_flUpSpeedMax; // offset 0xA54, size 0x4, align 4
    float32 m_flDownSpeed; // offset 0xA58, size 0x4, align 4
    float32 m_flBurstSpeedMultiplier; // offset 0xA5C, size 0x4, align 4
    float32 m_flBurstSpeedDuration; // offset 0xA60, size 0x4, align 4
    float32 m_flOscillateFrequency; // offset 0xA64, size 0x4, align 4
    float32 m_flLifeTime; // offset 0xA68, size 0x4, align 4
    float32 m_flRadius; // offset 0xA6C, size 0x4, align 4
    float32 m_flCollisionRadius; // offset 0xA70, size 0x4, align 4
    float32 m_flInvulDurationMin; // offset 0xA74, size 0x4, align 4
    float32 m_flInvulDurationMax; // offset 0xA78, size 0x4, align 4
    bool m_bUseKillerPlaneOffsets; // offset 0xA7C, size 0x1, align 1
    char _pad_0A7D[0x3]; // offset 0xA7D
    float32 m_flKillerPlaneOffset; // offset 0xA80, size 0x4, align 4
    float32 m_flKillerPlaneHorizontalDecayRate; // offset 0xA84, size 0x4, align 4
    float32 m_flKillerPlaneHorizontalSpeedX; // offset 0xA88, size 0x4, align 4
    float32 m_flKillerPlaneHorizontalSpeedY; // offset 0xA8C, size 0x4, align 4
    float32 m_flKillerPlaneVerticalSpeed; // offset 0xA90, size 0x4, align 4
    float32 m_flKillerPlaneSpeedNoise; // offset 0xA94, size 0x4, align 4
    float32 m_flKillerPlaneLaunchOffset; // offset 0xA98, size 0x4, align 4
    float32 m_flKillerPlaneLaunchDelay; // offset 0xA9C, size 0x4, align 4
    float32 m_flOrbClaimWindow; // offset 0xAA0, size 0x4, align 4
    char _pad_0AA4[0x4]; // offset 0xAA4
};
