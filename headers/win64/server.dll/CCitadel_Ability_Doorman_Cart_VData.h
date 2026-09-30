#pragma once

class CCitadel_Ability_Doorman_Cart_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1858, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flTraceRadius; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceAboveGround; // offset 0x13A4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x13A8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x13AC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x13B0, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x13B4, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x13B8, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x13BC, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x13C0, size 0x4, align 4
    float32 m_flCartSpeedFast; // offset 0x13C4, size 0x4, align 4
    CPiecewiseCurve m_flGroundHitPitchCurve; // offset 0x13C8, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitRollCurve; // offset 0x1408, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitYawCurve; // offset 0x1448, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierDrag; // offset 0x1488, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartExpireSound; // offset 0x1498, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartHitSound; // offset 0x14A8, size 0x10, align 8
    CSoundEventName m_CartHitAllySound; // offset 0x14B8, size 0x10, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x14C8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyCastProjectileTrailParticle; // offset 0x14D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FriendlyCastProjectileModel; // offset 0x15B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CartCastParticle; // offset 0x1698, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1778, size 0xE0, align 8
};
