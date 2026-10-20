#pragma once

class CAbilityViscousBowlingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1758, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x13F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x14D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // offset 0x15B0, size 0xE0, align 8
    CSoundEventName m_BallJumpSound; // offset 0x1690, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_EnterBallSound; // offset 0x16A0, size 0x10, align 8
    CSoundEventName m_BallLoopSound; // offset 0x16B0, size 0x10, align 8
    CSoundEventName m_ExitBallSound; // offset 0x16C0, size 0x10, align 8
    CSoundEventName m_WallImpactSound; // offset 0x16D0, size 0x10, align 8
    CSoundEventName m_PlayerImpactSound; // offset 0x16E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x16F0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // offset 0x1700, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // offset 0x1710, size 0x10, align 8
    float32 m_flTransformToBallTime; // offset 0x1720, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTransformFromBallTime; // offset 0x1724, size 0x4, align 4
    float32 m_flAirTurnRatio; // offset 0x1728, size 0x4, align 4
    float32 m_flWallTurnRatioMax; // offset 0x172C, size 0x4, align 4
    float32 m_flWallTurnRatioMin; // offset 0x1730, size 0x4, align 4
    float32 m_flTurnRatio; // offset 0x1734, size 0x4, align 4
    float32 m_flDefaultBallSpeed; // offset 0x1738, size 0x4, align 4
    float32 m_flFastBallSpeed; // offset 0x173C, size 0x4, align 4
    float32 m_flSpeedAccel; // offset 0x1740, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1744, size 0x4, align 4
    float32 m_flElasticity; // offset 0x1748, size 0x4, align 4
    float32 m_flWallCheckGroundOffset; // offset 0x174C, size 0x4, align 4
    float32 m_flWallPauseTime; // offset 0x1750, size 0x4, align 4
    float32 m_flWallAngleMin; // offset 0x1754, size 0x4, align 4
};
