#pragma once

class CAbilityViscousBowlingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x1848, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // offset 0x1928, size 0xE0, align 8
    CSoundEventName m_BallJumpSound; // offset 0x1A08, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_EnterBallSound; // offset 0x1A18, size 0x10, align 8
    CSoundEventName m_BallLoopSound; // offset 0x1A28, size 0x10, align 8
    CSoundEventName m_ExitBallSound; // offset 0x1A38, size 0x10, align 8
    CSoundEventName m_WallImpactSound; // offset 0x1A48, size 0x10, align 8
    CSoundEventName m_PlayerImpactSound; // offset 0x1A58, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1A68, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // offset 0x1A78, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // offset 0x1A88, size 0x10, align 8
    float32 m_flTransformToBallTime; // offset 0x1A98, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTransformFromBallTime; // offset 0x1A9C, size 0x4, align 4
    float32 m_flAirTurnRatio; // offset 0x1AA0, size 0x4, align 4
    float32 m_flWallTurnRatioMax; // offset 0x1AA4, size 0x4, align 4
    float32 m_flWallTurnRatioMin; // offset 0x1AA8, size 0x4, align 4
    float32 m_flTurnRatio; // offset 0x1AAC, size 0x4, align 4
    float32 m_flDefaultBallSpeed; // offset 0x1AB0, size 0x4, align 4
    float32 m_flFastBallSpeed; // offset 0x1AB4, size 0x4, align 4
    float32 m_flSpeedAccel; // offset 0x1AB8, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1ABC, size 0x4, align 4
    float32 m_flElasticity; // offset 0x1AC0, size 0x4, align 4
    float32 m_flWallCheckGroundOffset; // offset 0x1AC4, size 0x4, align 4
    float32 m_flWallPauseTime; // offset 0x1AC8, size 0x4, align 4
    float32 m_flWallAngleMin; // offset 0x1ACC, size 0x4, align 4
};
