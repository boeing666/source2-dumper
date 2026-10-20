#pragma once

class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x1070, size 0x4, align 4
    float32 m_flClimbSpeedUp; // offset 0x1074, size 0x4, align 4
    float32 m_flClimbSpeedDown; // offset 0x1078, size 0x4, align 4
    float32 m_flClimbSpeedDownMax; // offset 0x107C, size 0x4, align 4
    float32 m_flClimbDownAccelTime; // offset 0x1080, size 0x4, align 4
    float32 m_flLatchSpeed; // offset 0x1084, size 0x4, align 4
    float32 m_flAttachOffset; // offset 0x1088, size 0x4, align 4
    float32 m_flMinReconnectTime; // offset 0x108C, size 0x4, align 4
    float32 m_flSideMoveReduction; // offset 0x1090, size 0x4, align 4
    float32 m_flTopOffset; // offset 0x1094, size 0x4, align 4
    float32 m_flBottomOffset; // offset 0x1098, size 0x4, align 4
    float32 m_flTraceRadiusSize; // offset 0x109C, size 0x4, align 4
    float32 m_flStopTimeToShoot; // offset 0x10A0, size 0x4, align 4
    float32 m_flJumpOffVertical; // offset 0x10A4, size 0x4, align 4
    float32 m_flJumpOffHorizontal; // offset 0x10A8, size 0x4, align 4
    float32 m_flDuckOffVertical; // offset 0x10AC, size 0x4, align 4
    float32 m_flDuckOffHorizontal; // offset 0x10B0, size 0x4, align 4
    float32 m_flActivateRange; // offset 0x10B4, size 0x4, align 4
    float32 m_flJumpToRoofRayCheckDist; // offset 0x10B8, size 0x4, align 4
    float32 m_flMinTimeToRoofCheck; // offset 0x10BC, size 0x4, align 4
    float32 m_flTimeToHintRefresh; // offset 0x10C0, size 0x4, align 4
    float32 m_iMaxHintCount; // offset 0x10C4, size 0x4, align 4
    float32 m_flClimbRopeSlowDurationOnHit; // offset 0x10C8, size 0x4, align 4
    float32 m_flCameraRotateSpeed; // offset 0x10CC, size 0x4, align 4
    float32 m_flCameraRotateMaxTime; // offset 0x10D0, size 0x4, align 4
    char _pad_10D4[0x4]; // offset 0x10D4
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // offset 0x10D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowFromRecentDamageModifier; // offset 0x10E8, size 0x10, align 8
};
