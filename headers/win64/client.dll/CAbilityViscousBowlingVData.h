#pragma once

class CAbilityViscousBowlingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x1800, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // offset 0x18E0, size 0xE0, align 8
    CSoundEventName m_BallJumpSound; // offset 0x19C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_EnterBallSound; // offset 0x19D0, size 0x10, align 8
    CSoundEventName m_BallLoopSound; // offset 0x19E0, size 0x10, align 8
    CSoundEventName m_ExitBallSound; // offset 0x19F0, size 0x10, align 8
    CSoundEventName m_WallImpactSound; // offset 0x1A00, size 0x10, align 8
    CSoundEventName m_PlayerImpactSound; // offset 0x1A10, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1A20, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // offset 0x1A30, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // offset 0x1A40, size 0x10, align 8
    float32 m_flTransformToBallTime; // offset 0x1A50, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTransformFromBallTime; // offset 0x1A54, size 0x4, align 4
    float32 m_flAirTurnRatio; // offset 0x1A58, size 0x4, align 4
    float32 m_flWallTurnRatioMax; // offset 0x1A5C, size 0x4, align 4
    float32 m_flWallTurnRatioMin; // offset 0x1A60, size 0x4, align 4
    float32 m_flTurnRatio; // offset 0x1A64, size 0x4, align 4
    float32 m_flDefaultBallSpeed; // offset 0x1A68, size 0x4, align 4
    float32 m_flFastBallSpeed; // offset 0x1A6C, size 0x4, align 4
    float32 m_flSpeedAccel; // offset 0x1A70, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1A74, size 0x4, align 4
    float32 m_flElasticity; // offset 0x1A78, size 0x4, align 4
    float32 m_flWallCheckGroundOffset; // offset 0x1A7C, size 0x4, align 4
    float32 m_flWallPauseTime; // offset 0x1A80, size 0x4, align 4
    float32 m_flWallAngleMin; // offset 0x1A84, size 0x4, align 4
};
