#pragma once

class CCitadel_Ability_Doorman_Cart_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flTraceRadius; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceAboveGround; // offset 0x13EC, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x13F0, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x13F4, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x13F8, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x13FC, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1400, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1404, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x1408, size 0x4, align 4
    float32 m_flCartSpeedFast; // offset 0x140C, size 0x4, align 4
    CPiecewiseCurve m_flGroundHitPitchCurve; // offset 0x1410, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitRollCurve; // offset 0x1450, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitYawCurve; // offset 0x1490, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierDrag; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartExpireSound; // offset 0x14E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartHitSound; // offset 0x14F0, size 0x10, align 8
    CSoundEventName m_CartHitAllySound; // offset 0x1500, size 0x10, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x1510, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyCastProjectileTrailParticle; // offset 0x1520, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FriendlyCastProjectileModel; // offset 0x1600, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CartCastParticle; // offset 0x16E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x17C0, size 0xE0, align 8
};
