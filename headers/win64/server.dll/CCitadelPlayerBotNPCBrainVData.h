#pragma once

class CCitadelPlayerBotNPCBrainVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    float32 m_flJumpMaxRise; // offset 0xC50, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirJumpMin; // offset 0xC54, size 0x4, align 4
    float32 m_flJumpMaxDrop; // offset 0xC58, size 0x4, align 4
    float32 m_flJumpMaxDist; // offset 0xC5C, size 0x4, align 4
    float32 m_flJumpMinDist; // offset 0xC60, size 0x4, align 4
    float32 m_flClimbUpCostBase; // offset 0xC64, size 0x4, align 4
    float32 m_flClimbUpCostScalar; // offset 0xC68, size 0x4, align 4
    float32 m_flFaceTargetDistance; // offset 0xC6C, size 0x4, align 4
    float32 m_flNavGoalTolerance; // offset 0xC70, size 0x4, align 4
    float32 m_flVerticalAttachOffset; // offset 0xC74, size 0x4, align 4
    float32 m_flStuckTime; // offset 0xC78, size 0x4, align 4
    float32 m_flStuckTimeAir; // offset 0xC7C, size 0x4, align 4
    float32 m_flMajorStuckTime; // offset 0xC80, size 0x4, align 4
    int32 m_unMajorStuckAttemptCount; // offset 0xC84, size 0x4, align 4
    float32 m_flStuckDistance; // offset 0xC88, size 0x4, align 4
    float32 m_flMaxPathDistance; // offset 0xC8C, size 0x4, align 4
    float32 m_flMinLanePathDistance; // offset 0xC90, size 0x4, align 4
    float32 m_flEnemyDistanceForReload; // offset 0xC94, size 0x4, align 4
    float32 m_flReloadEnemyFarPct; // offset 0xC98, size 0x4, align 4
    float32 m_flReloadEnemyLoSPct; // offset 0xC9C, size 0x4, align 4
    float32 m_flReloadEnemyLosTime; // offset 0xCA0, size 0x4, align 4
    float32 m_flMinShootTimeToReload; // offset 0xCA4, size 0x4, align 4
    float32 m_flDashDamageThreshold; // offset 0xCA8, size 0x4, align 4
    float32 m_flDashDamageTickDown; // offset 0xCAC, size 0x4, align 4
    float32 m_flMinDesiredDashDist; // offset 0xCB0, size 0x4, align 4
    float32 m_flMinAbilityAimTime; // offset 0xCB4, size 0x4, align 4
    float32 m_flDisengageFromEnemyToLaneDist; // offset 0xCB8, size 0x4, align 4
    float32 m_flDefendBaseSearchRadius; // offset 0xCBC, size 0x4, align 4
};
