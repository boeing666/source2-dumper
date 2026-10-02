#pragma once

class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1470, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x13E8, size 0x4, align 4
    float32 m_flClimbSpeedUp; // offset 0x13EC, size 0x4, align 4
    float32 m_flClimbSpeedDown; // offset 0x13F0, size 0x4, align 4
    float32 m_flClimbSpeedDownMax; // offset 0x13F4, size 0x4, align 4
    float32 m_flClimbDownAccelTime; // offset 0x13F8, size 0x4, align 4
    float32 m_flLatchSpeed; // offset 0x13FC, size 0x4, align 4
    float32 m_flAttachOffset; // offset 0x1400, size 0x4, align 4
    float32 m_flMinReconnectTime; // offset 0x1404, size 0x4, align 4
    float32 m_flSideMoveReduction; // offset 0x1408, size 0x4, align 4
    float32 m_flTopOffset; // offset 0x140C, size 0x4, align 4
    float32 m_flBottomOffset; // offset 0x1410, size 0x4, align 4
    float32 m_flTraceRadiusSize; // offset 0x1414, size 0x4, align 4
    float32 m_flStopTimeToShoot; // offset 0x1418, size 0x4, align 4
    float32 m_flJumpOffVertical; // offset 0x141C, size 0x4, align 4
    float32 m_flJumpOffHorizontal; // offset 0x1420, size 0x4, align 4
    float32 m_flDuckOffVertical; // offset 0x1424, size 0x4, align 4
    float32 m_flDuckOffHorizontal; // offset 0x1428, size 0x4, align 4
    float32 m_flActivateRange; // offset 0x142C, size 0x4, align 4
    float32 m_flJumpToRoofRayCheckDist; // offset 0x1430, size 0x4, align 4
    float32 m_flMinTimeToRoofCheck; // offset 0x1434, size 0x4, align 4
    float32 m_flTimeToHintRefresh; // offset 0x1438, size 0x4, align 4
    float32 m_iMaxHintCount; // offset 0x143C, size 0x4, align 4
    float32 m_flClimbRopeSlowDurationOnHit; // offset 0x1440, size 0x4, align 4
    float32 m_flCameraRotateSpeed; // offset 0x1444, size 0x4, align 4
    float32 m_flCameraRotateMaxTime; // offset 0x1448, size 0x4, align 4
    char _pad_144C[0x4]; // offset 0x144C
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // offset 0x1450, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowFromRecentDamageModifier; // offset 0x1460, size 0x10, align 8
};
