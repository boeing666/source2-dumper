#pragma once

class CCitadel_Ability_Doorman_Cart_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1538, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flTraceRadius; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceAboveGround; // offset 0x1084, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1088, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x108C, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1090, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1094, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1098, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x109C, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x10A0, size 0x4, align 4
    float32 m_flCartSpeedFast; // offset 0x10A4, size 0x4, align 4
    CPiecewiseCurve m_flGroundHitPitchCurve; // offset 0x10A8, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitRollCurve; // offset 0x10E8, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitYawCurve; // offset 0x1128, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierDrag; // offset 0x1168, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartExpireSound; // offset 0x1178, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartHitSound; // offset 0x1188, size 0x10, align 8
    CSoundEventName m_CartHitAllySound; // offset 0x1198, size 0x10, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x11A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyCastProjectileTrailParticle; // offset 0x11B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FriendlyCastProjectileModel; // offset 0x1298, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CartCastParticle; // offset 0x1378, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1458, size 0xE0, align 8
};
