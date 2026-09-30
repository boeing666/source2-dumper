#pragma once

class CAI_Path : public IAI_Path /*0x0*/  // sizeof 0x3E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CAI_WaypointList m_Waypoints; // offset 0x10, size 0x10, align 255
    CRelativeLocation m_vPrevWaypoint; // offset 0x20, size 0x48, align 8
    CAI_WaypointList m_WaypointsLocal; // offset 0x68, size 0x10, align 255
    char _pad_0078[0x8]; // offset 0x78
    uint32 m_nLocalPathHash; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    AI_PathGoal_t m_goal; // offset 0x88, size 0x258, align 8
    uint32 m_nSerialNumber; // offset 0x2E0, size 0x4, align 4
    AI_TaskFailureCode_t m_nFailureCode; // offset 0x2E4, size 0x2, align 2
    char _pad_02E6[0x2]; // offset 0x2E6
    CHandle< CBaseEntity > m_hBlockingEntity; // offset 0x2E8, size 0x4, align 4
    bool m_bSuppressRepathing; // offset 0x2EC, size 0x1, align 1
    bool m_bUnbuilt; // offset 0x2ED, size 0x1, align 1
    bool m_bSuccess; // offset 0x2EE, size 0x1, align 1
    bool m_bNeedsRebuild; // offset 0x2EF, size 0x1, align 1
    bool m_bOwnsCoverLocation; // offset 0x2F0, size 0x1, align 1
    bool m_bCanRepathFromGoalMovement; // offset 0x2F1, size 0x1, align 1
    char _pad_02F2[0x6]; // offset 0x2F2
    CRelativeLocation m_vGoalActualPos_Initial; // offset 0x2F8, size 0x48, align 8
    CRelativeLocation m_vGoalBasePos_Initial; // offset 0x340, size 0x48, align 8
    CRelativeLocation m_vGoalActualPos_ForClipping; // offset 0x388, size 0x48, align 8
    GameTime_t m_flPathCreationTime; // offset 0x3D0, size 0x4, align 255
    char _pad_03D4[0xC]; // offset 0x3D4
    NavHull_t m_nNavHullIdx; // offset 0x3E0, size 0x4, align 255
    char _pad_03E4[0x4]; // offset 0x3E4
};
