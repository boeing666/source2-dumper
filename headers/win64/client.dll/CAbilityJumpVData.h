#pragma once

class CAbilityJumpVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flShootingLockoutAfterJump; // offset 0x13E8, size 0x4, align 4
    float32 m_flShootingInaccuracyPercentageAfterJump; // offset 0x13EC, size 0x4, align 4
    float32 m_flShootingInaccuracyDurationAfterJump; // offset 0x13F0, size 0x4, align 4
    char _pad_13F4[0x4]; // offset 0x13F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x15B8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GroundJumpExecutedSound; // offset 0x16A8, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_AirJumpSound; // offset 0x16B8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flMantleRefundWindow; // offset 0x16C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flZiplineRefundWindow; // offset 0x16CC, size 0x4, align 4
    float32 m_flLateJumpGraceWindow; // offset 0x16D0, size 0x4, align 4
    float32 m_flMaxSpeedDelta; // offset 0x16D4, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashJumpSound; // offset 0x16D8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flDashJumpStartTime; // offset 0x16E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDashJumpEndTime; // offset 0x16EC, size 0x4, align 4
    float32 m_flDashJumpDistanceInMeters; // offset 0x16F0, size 0x4, align 4 | MPropertyDescription
    char _pad_16F4[0x4]; // offset 0x16F4
    float32 m_flDashJumpVerticalSpeed; // offset 0x16F8, size 0x4, align 4
    float32 m_flDashJumpMissMaxSpeed; // offset 0x16FC, size 0x4, align 4
    float32 m_flDashJumpMantleDisableTime; // offset 0x1700, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlTime; // offset 0x1704, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlPercent; // offset 0x1708, size 0x4, align 4
    char _pad_170C[0x4]; // offset 0x170C
    CSoundEventName m_WallJumpExecutedSound; // offset 0x1710, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_CornerBoostExecutedSound; // offset 0x1720, size 0x10, align 8 | MPropertyDescription
    float32 m_flCollidedWallMaxDist; // offset 0x1730, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // offset 0x1734, size 0x10, align 255 | MPropertyDescription
    float32 m_flWallJumpFullPowerRechargeTime; // offset 0x1744, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerMin; // offset 0x1748, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerBias; // offset 0x174C, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpUpSpeed; // offset 0x1750, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxLateralSpeed; // offset 0x1754, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // offset 0x1758, size 0x40, align 8 | MPropertyDescription
    float32 m_flWallJumpMinOutSpeed; // offset 0x1798, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxOutSpeed; // offset 0x179C, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpLateralInputSuppressTime; // offset 0x17A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpReturnToWallBonusAccel; // offset 0x17A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlowedSlideJumpFactor; // offset 0x17A8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_17AC[0x4]; // offset 0x17AC
};
