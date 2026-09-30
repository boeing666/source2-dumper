#pragma once

class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x13A0, size 0x4, align 4
    float32 m_flClimbSpeedUp; // offset 0x13A4, size 0x4, align 4
    float32 m_flClimbSpeedDown; // offset 0x13A8, size 0x4, align 4
    float32 m_flClimbSpeedDownMax; // offset 0x13AC, size 0x4, align 4
    float32 m_flClimbDownAccelTime; // offset 0x13B0, size 0x4, align 4
    float32 m_flLatchSpeed; // offset 0x13B4, size 0x4, align 4
    float32 m_flAttachOffset; // offset 0x13B8, size 0x4, align 4
    float32 m_flMinReconnectTime; // offset 0x13BC, size 0x4, align 4
    float32 m_flSideMoveReduction; // offset 0x13C0, size 0x4, align 4
    float32 m_flTopOffset; // offset 0x13C4, size 0x4, align 4
    float32 m_flBottomOffset; // offset 0x13C8, size 0x4, align 4
    float32 m_flTraceRadiusSize; // offset 0x13CC, size 0x4, align 4
    float32 m_flStopTimeToShoot; // offset 0x13D0, size 0x4, align 4
    float32 m_flJumpOffVertical; // offset 0x13D4, size 0x4, align 4
    float32 m_flJumpOffHorizontal; // offset 0x13D8, size 0x4, align 4
    float32 m_flDuckOffVertical; // offset 0x13DC, size 0x4, align 4
    float32 m_flDuckOffHorizontal; // offset 0x13E0, size 0x4, align 4
    float32 m_flActivateRange; // offset 0x13E4, size 0x4, align 4
    float32 m_flJumpToRoofRayCheckDist; // offset 0x13E8, size 0x4, align 4
    float32 m_flMinTimeToRoofCheck; // offset 0x13EC, size 0x4, align 4
    float32 m_flTimeToHintRefresh; // offset 0x13F0, size 0x4, align 4
    float32 m_iMaxHintCount; // offset 0x13F4, size 0x4, align 4
    float32 m_flClimbRopeSlowDurationOnHit; // offset 0x13F8, size 0x4, align 4
    float32 m_flCameraRotateSpeed; // offset 0x13FC, size 0x4, align 4
    float32 m_flCameraRotateMaxTime; // offset 0x1400, size 0x4, align 4
    char _pad_1404[0x4]; // offset 0x1404
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowFromRecentDamageModifier; // offset 0x1418, size 0x10, align 8
};
