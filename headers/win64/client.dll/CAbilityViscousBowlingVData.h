#pragma once

class CAbilityViscousBowlingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactFx; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallTrailFx; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x1C78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirectionParticle; // offset 0x1D58, size 0xE0, align 8
    CGlobalSymbol m_strPopGraphParamter; // offset 0x1E38, size 0x8, align 8 | MPropertyLeafSuggestionProviderFn
    CSoundEventName m_BallJumpSound; // offset 0x1E40, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_EnterBallSound; // offset 0x1E50, size 0x10, align 8
    CSoundEventName m_BallLoopSound; // offset 0x1E60, size 0x10, align 8
    CSoundEventName m_ExitBallSound; // offset 0x1E70, size 0x10, align 8
    CSoundEventName m_WallImpactSound; // offset 0x1E80, size 0x10, align 8
    CSoundEventName m_PlayerImpactSound; // offset 0x1E90, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1EA0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamagePreventionModifier; // offset 0x1EB0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // offset 0x1EC0, size 0x10, align 8
    float32 m_flTransformToBallTime; // offset 0x1ED0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTransformFromBallTime; // offset 0x1ED4, size 0x4, align 4
    float32 m_flAirTurnRatio; // offset 0x1ED8, size 0x4, align 4
    float32 m_flWallTurnRatioMax; // offset 0x1EDC, size 0x4, align 4
    float32 m_flWallTurnRatioMin; // offset 0x1EE0, size 0x4, align 4
    float32 m_flTurnRatio; // offset 0x1EE4, size 0x4, align 4
    float32 m_flDefaultBallSpeed; // offset 0x1EE8, size 0x4, align 4
    float32 m_flFastBallSpeed; // offset 0x1EEC, size 0x4, align 4
    float32 m_flSpeedAccel; // offset 0x1EF0, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1EF4, size 0x4, align 4
    float32 m_flElasticity; // offset 0x1EF8, size 0x4, align 4
    float32 m_flWallCheckGroundOffset; // offset 0x1EFC, size 0x4, align 4
    float32 m_flWallPauseTime; // offset 0x1F00, size 0x4, align 4
    float32 m_flWallAngleMin; // offset 0x1F04, size 0x4, align 4
};
