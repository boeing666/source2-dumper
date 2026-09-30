#pragma once

class CAbilityJumpVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flShootingLockoutAfterJump; // offset 0x13A0, size 0x4, align 4
    float32 m_flShootingInaccuracyPercentageAfterJump; // offset 0x13A4, size 0x4, align 4
    float32 m_flShootingInaccuracyDurationAfterJump; // offset 0x13A8, size 0x4, align 4
    char _pad_13AC[0x4]; // offset 0x13AC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x1570, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GroundJumpExecutedSound; // offset 0x1660, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_AirJumpSound; // offset 0x1670, size 0x10, align 8 | MPropertyGroupName
    float32 m_flMantleRefundWindow; // offset 0x1680, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flZiplineRefundWindow; // offset 0x1684, size 0x4, align 4
    float32 m_flLateJumpGraceWindow; // offset 0x1688, size 0x4, align 4
    float32 m_flMaxSpeedDelta; // offset 0x168C, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashJumpSound; // offset 0x1690, size 0x10, align 8 | MPropertyGroupName
    float32 m_flDashJumpStartTime; // offset 0x16A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDashJumpEndTime; // offset 0x16A4, size 0x4, align 4
    float32 m_flDashJumpDistanceInMeters; // offset 0x16A8, size 0x4, align 4 | MPropertyDescription
    char _pad_16AC[0x4]; // offset 0x16AC
    float32 m_flDashJumpVerticalSpeed; // offset 0x16B0, size 0x4, align 4
    float32 m_flDashJumpMissMaxSpeed; // offset 0x16B4, size 0x4, align 4
    float32 m_flDashJumpMantleDisableTime; // offset 0x16B8, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlTime; // offset 0x16BC, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlPercent; // offset 0x16C0, size 0x4, align 4
    char _pad_16C4[0x4]; // offset 0x16C4
    CSoundEventName m_WallJumpExecutedSound; // offset 0x16C8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_CornerBoostExecutedSound; // offset 0x16D8, size 0x10, align 8 | MPropertyDescription
    float32 m_flCollidedWallMaxDist; // offset 0x16E8, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // offset 0x16EC, size 0x10, align 255 | MPropertyDescription
    float32 m_flWallJumpFullPowerRechargeTime; // offset 0x16FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerMin; // offset 0x1700, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerBias; // offset 0x1704, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpUpSpeed; // offset 0x1708, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxLateralSpeed; // offset 0x170C, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // offset 0x1710, size 0x40, align 8 | MPropertyDescription
    float32 m_flWallJumpMinOutSpeed; // offset 0x1750, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxOutSpeed; // offset 0x1754, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpLateralInputSuppressTime; // offset 0x1758, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpReturnToWallBonusAccel; // offset 0x175C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlowedSlideJumpFactor; // offset 0x1760, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_1764[0x4]; // offset 0x1764
};
