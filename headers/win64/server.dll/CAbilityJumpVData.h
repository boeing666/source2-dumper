#pragma once

class CAbilityJumpVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1438, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flShootingLockoutAfterJump; // offset 0x1070, size 0x4, align 4
    float32 m_flShootingInaccuracyPercentageAfterJump; // offset 0x1074, size 0x4, align 4
    float32 m_flShootingInaccuracyDurationAfterJump; // offset 0x1078, size 0x4, align 4
    char _pad_107C[0x4]; // offset 0x107C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x1240, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GroundJumpExecutedSound; // offset 0x1330, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_AirJumpSound; // offset 0x1340, size 0x10, align 8 | MPropertyGroupName
    float32 m_flMantleRefundWindow; // offset 0x1350, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flZiplineRefundWindow; // offset 0x1354, size 0x4, align 4
    float32 m_flLateJumpGraceWindow; // offset 0x1358, size 0x4, align 4
    float32 m_flMaxSpeedDelta; // offset 0x135C, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashJumpSound; // offset 0x1360, size 0x10, align 8 | MPropertyGroupName
    float32 m_flDashJumpStartTime; // offset 0x1370, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDashJumpEndTime; // offset 0x1374, size 0x4, align 4
    float32 m_flDashJumpDistanceInMeters; // offset 0x1378, size 0x4, align 4 | MPropertyDescription
    char _pad_137C[0x4]; // offset 0x137C
    float32 m_flDashJumpVerticalSpeed; // offset 0x1380, size 0x4, align 4
    float32 m_flDashJumpMissMaxSpeed; // offset 0x1384, size 0x4, align 4
    float32 m_flDashJumpMantleDisableTime; // offset 0x1388, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlTime; // offset 0x138C, size 0x4, align 4
    float32 m_flDashJumpExtraAirControlPercent; // offset 0x1390, size 0x4, align 4
    char _pad_1394[0x4]; // offset 0x1394
    CSoundEventName m_WallJumpExecutedSound; // offset 0x1398, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_CornerBoostExecutedSound; // offset 0x13A8, size 0x10, align 8 | MPropertyDescription
    float32 m_flCollidedWallMaxDist; // offset 0x13B8, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // offset 0x13BC, size 0x10, align 255 | MPropertyDescription
    float32 m_flWallJumpFullPowerRechargeTime; // offset 0x13CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerMin; // offset 0x13D0, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpPowerBias; // offset 0x13D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpUpSpeed; // offset 0x13D8, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxLateralSpeed; // offset 0x13DC, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // offset 0x13E0, size 0x40, align 8 | MPropertyDescription
    float32 m_flWallJumpMinOutSpeed; // offset 0x1420, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpMaxOutSpeed; // offset 0x1424, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpLateralInputSuppressTime; // offset 0x1428, size 0x4, align 4 | MPropertyDescription
    float32 m_flWallJumpReturnToWallBonusAccel; // offset 0x142C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlowedSlideJumpFactor; // offset 0x1430, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_1434[0x4]; // offset 0x1434
};
