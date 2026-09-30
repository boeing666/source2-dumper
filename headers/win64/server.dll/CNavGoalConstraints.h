#pragma once

class CNavGoalConstraints  // sizeof 0x170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    MovementId_t m_nMovementId; // offset 0x8, size 0x8, align 8
    GoalCategory_t m_nCategory; // offset 0x10, size 0x4, align 4
    NavGoalType_t m_nNavGoalType; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    CRelativeLocation m_vThreatLocation; // offset 0x18, size 0x48, align 8
    float32 m_flThreatDistMin; // offset 0x60, size 0x4, align 4
    float32 m_flThreatDistMax; // offset 0x64, size 0x4, align 4
    CRelativeLocation m_vNearLocation; // offset 0x68, size 0x48, align 8
    float32 m_flNearDistMin; // offset 0xB0, size 0x4, align 4
    float32 m_flNearDistMax; // offset 0xB4, size 0x4, align 4
    CUtlVector< TgPlane_t > m_vecConstrainingPlanes; // offset 0xB8, size 0x18, align 8
    CUtlVector< TgSphere_t > m_vecConstrainingSpheres; // offset 0xD0, size 0x18, align 8
    CUtlVector< TgMarkup_t > m_vecConstrainingMarkups; // offset 0xE8, size 0x18, align 8
    bool m_bHasOptionalSpheres; // offset 0x100, size 0x1, align 1
    bool m_bHasOptionalPlanes; // offset 0x101, size 0x1, align 1
    bool m_bHasOptionalMarkups; // offset 0x102, size 0x1, align 1
    char _pad_0103[0x5]; // offset 0x103
    PathMotorSettings_t m_pathMotorSettings; // offset 0x108, size 0x58, align 8
    CAI_PathCost* m_pPathCostOverride; // offset 0x160, size 0x8, align 8
    float32 m_flMaxPathLength; // offset 0x168, size 0x4, align 4
    char _pad_016C[0x4]; // offset 0x16C
};
