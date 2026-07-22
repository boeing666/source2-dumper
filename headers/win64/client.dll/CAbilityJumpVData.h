#pragma once

class CAbilityJumpVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flShootingLockoutAfterJump; // offset 0x1818, size 0x4, align 4
    float32 m_flShootingInaccuracyPercentageAfterJump; // offset 0x181C, size 0x4, align 4
    float32 m_flShootingInaccuracyDurationAfterJump; // offset 0x1820, size 0x4, align 4
    char _pad_1824[0x4]; // offset 0x1824
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x19E8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1AC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GroundJumpExecutedSound; // offset 0x1AD8, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_AirJumpSound; // offset 0x1AE8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flMantleRefundWindow; // offset 0x1AF8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flZiplineRefundWindow; // offset 0x1AFC, size 0x4, align 4
    float32 m_flLateJumpGraceWindow; // offset 0x1B00, size 0x4, align 4
    float32 m_flMaxSpeedDelta; // offset 0x1B04, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashJumpSound; // offset 0x1B08, size 0x10, align 8 | MPropertyGroupName
    float32 m_flDashJumpStartTime; // offset 0x1B18, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDashJumpEndTime; // offset 0x1B1C, size 0x4, align 4
    float32 m_flDashJumpDistanceInMeters; // offset 0x1B20, size 0x4, align 4 | MPropertyDescription
    char _pad_1B24[0x4]; // offset 0x1B24
    float32 m_flDashJumpVerticalSpeed; // offset 0x1B28, size 0x4, align 4
    float32 m_flDashJumpMissMaxSpeed; // offset 0x1B2C, size 0x4, align 4
    float32 m_flDashJumpMantleDisableTime; // offset 0x1B30, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlTime; // offset 0x1B34, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlPercent; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
    CSoundEventName m_WallJumpExecutedSound; // offset 0x1B40, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_CornerBoostExecutedSound; // offset 0x1B50, size 0x10, align 8 | MPropertyDescription
    float32 m_flCollidedWallMaxDist; // offset 0x1B60, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // offset 0x1B64, size 0x10, align 255 | MPropertyDescription
    float32 m_flWallJumpFullPowerRechargeTime; // offset 0x1B74, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerMin; // offset 0x1B78, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerBias; // offset 0x1B7C, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpUpSpeed; // offset 0x1B80, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxLateralSpeed; // offset 0x1B84, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // offset 0x1B88, size 0x40, align 8 | MPropertyDescription
    float32 m_flWallJumpMinOutSpeed; // offset 0x1BC8, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxOutSpeed; // offset 0x1BCC, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpLateralInputSuppressTime; // offset 0x1BD0, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpReturnToWallBonusAccel; // offset 0x1BD4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlowedSlideJumpFactor; // offset 0x1BD8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_1BDC[0x4]; // offset 0x1BDC
};
