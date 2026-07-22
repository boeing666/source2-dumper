#pragma once

class CCitadelPlayerBotNPCBrainVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x13B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    float32 m_flJumpMaxRise; // offset 0x1348, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirJumpMin; // offset 0x134C, size 0x4, align 4
    float32 m_flJumpMaxDrop; // offset 0x1350, size 0x4, align 4
    float32 m_flJumpMaxDist; // offset 0x1354, size 0x4, align 4
    float32 m_flJumpMinDist; // offset 0x1358, size 0x4, align 4
    float32 m_flClimbUpCostBase; // offset 0x135C, size 0x4, align 4
    float32 m_flClimbUpCostScalar; // offset 0x1360, size 0x4, align 4
    float32 m_flFaceTargetDistance; // offset 0x1364, size 0x4, align 4
    float32 m_flNavGoalTolerance; // offset 0x1368, size 0x4, align 4
    float32 m_flVerticalAttachOffset; // offset 0x136C, size 0x4, align 4
    float32 m_flStuckTime; // offset 0x1370, size 0x4, align 4
    float32 m_flStuckTimeAir; // offset 0x1374, size 0x4, align 4
    float32 m_flMajorStuckTime; // offset 0x1378, size 0x4, align 4
    int32 m_unMajorStuckAttemptCount; // offset 0x137C, size 0x4, align 4
    float32 m_flStuckDistance; // offset 0x1380, size 0x4, align 4
    float32 m_flMaxPathDistance; // offset 0x1384, size 0x4, align 4
    float32 m_flMinLanePathDistance; // offset 0x1388, size 0x4, align 4
    float32 m_flEnemyDistanceForReload; // offset 0x138C, size 0x4, align 4
    float32 m_flReloadEnemyFarPct; // offset 0x1390, size 0x4, align 4
    float32 m_flReloadEnemyLoSPct; // offset 0x1394, size 0x4, align 4
    float32 m_flReloadEnemyLosTime; // offset 0x1398, size 0x4, align 4
    float32 m_flMinShootTimeToReload; // offset 0x139C, size 0x4, align 4
    float32 m_flDashDamageThreshold; // offset 0x13A0, size 0x4, align 4
    float32 m_flDashDamageTickDown; // offset 0x13A4, size 0x4, align 4
    float32 m_flMinDesiredDashDist; // offset 0x13A8, size 0x4, align 4
    float32 m_flMinAbilityAimTime; // offset 0x13AC, size 0x4, align 4
    float32 m_flDisengageFromEnemyToLaneDist; // offset 0x13B0, size 0x4, align 4
    float32 m_flDefendBaseSearchRadius; // offset 0x13B4, size 0x4, align 4
};
