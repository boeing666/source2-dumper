#pragma once

class CCitadel_Ability_Doorman_Cart_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flTraceRadius; // offset 0x1818, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceAboveGround; // offset 0x181C, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1820, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1824, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1828, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x182C, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1830, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1834, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x1838, size 0x4, align 4
    float32 m_flCartSpeedFast; // offset 0x183C, size 0x4, align 4
    CPiecewiseCurve m_flGroundHitPitchCurve; // offset 0x1840, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitRollCurve; // offset 0x1880, size 0x40, align 8
    CPiecewiseCurve m_flGroundHitYawCurve; // offset 0x18C0, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierDrag; // offset 0x1900, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartExpireSound; // offset 0x1910, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_CartHitSound; // offset 0x1920, size 0x10, align 8
    CSoundEventName m_CartHitAllySound; // offset 0x1930, size 0x10, align 8
    CSoundEventName m_strWallSlamSound; // offset 0x1940, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyCastProjectileTrailParticle; // offset 0x1950, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FriendlyCastProjectileModel; // offset 0x1A30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CartCastParticle; // offset 0x1B10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1BF0, size 0xE0, align 8
};
