#pragma once

class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x1818, size 0x4, align 4
    float32 m_flClimbSpeedUp; // offset 0x181C, size 0x4, align 4
    float32 m_flClimbSpeedDown; // offset 0x1820, size 0x4, align 4
    float32 m_flClimbSpeedDownMax; // offset 0x1824, size 0x4, align 4
    float32 m_flClimbDownAccelTime; // offset 0x1828, size 0x4, align 4
    float32 m_flLatchSpeed; // offset 0x182C, size 0x4, align 4
    float32 m_flAttachOffset; // offset 0x1830, size 0x4, align 4
    float32 m_flMinReconnectTime; // offset 0x1834, size 0x4, align 4
    float32 m_flSideMoveReduction; // offset 0x1838, size 0x4, align 4
    float32 m_flTopOffset; // offset 0x183C, size 0x4, align 4
    float32 m_flBottomOffset; // offset 0x1840, size 0x4, align 4
    float32 m_flTraceRadiusSize; // offset 0x1844, size 0x4, align 4
    float32 m_flStopTimeToShoot; // offset 0x1848, size 0x4, align 4
    float32 m_flJumpOffVertical; // offset 0x184C, size 0x4, align 4
    float32 m_flJumpOffHorizontal; // offset 0x1850, size 0x4, align 4
    float32 m_flDuckOffVertical; // offset 0x1854, size 0x4, align 4
    float32 m_flDuckOffHorizontal; // offset 0x1858, size 0x4, align 4
    float32 m_flActivateRange; // offset 0x185C, size 0x4, align 4
    float32 m_flJumpToRoofRayCheckDist; // offset 0x1860, size 0x4, align 4
    float32 m_flMinTimeToRoofCheck; // offset 0x1864, size 0x4, align 4
    float32 m_flTimeToHintRefresh; // offset 0x1868, size 0x4, align 4
    float32 m_iMaxHintCount; // offset 0x186C, size 0x4, align 4
    float32 m_flClimbRopeSlowDurationOnHit; // offset 0x1870, size 0x4, align 4
    float32 m_flCameraRotateSpeed; // offset 0x1874, size 0x4, align 4
    float32 m_flCameraRotateMaxTime; // offset 0x1878, size 0x4, align 4
    char _pad_187C[0x4]; // offset 0x187C
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // offset 0x1880, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowFromRecentDamageModifier; // offset 0x1890, size 0x10, align 8
};
