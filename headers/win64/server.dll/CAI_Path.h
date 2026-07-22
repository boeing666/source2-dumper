#pragma once

class CAI_Path  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CAI_WaypointList m_Waypoints; // offset 0x8, size 0x8, align 255 | MSaveOpsForField
    VectorWS m_vPrevWaypoint; // offset 0x10, size 0xC, align 4
    VectorWS m_vPrevWaypointBase; // offset 0x1C, size 0xC, align 4
    CAI_WaypointList m_WaypointsLocal; // offset 0x28, size 0x8, align 255 | MSaveOpsForField
    char _pad_0030[0x8]; // offset 0x30
    uint32 m_nLocalPathHash; // offset 0x38, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x3C, size 0x4, align 4
    Vector m_vTargetOffset; // offset 0x40, size 0xC, align 4
    bool m_bGoalPosSet; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    VectorWS m_vGoalActualPos; // offset 0x50, size 0xC, align 4
    VectorWS m_vGoalBasePos; // offset 0x5C, size 0xC, align 4
    VectorWS m_vGoalActualPos_Initial; // offset 0x68, size 0xC, align 4
    VectorWS m_vGoalBasePos_Initial; // offset 0x74, size 0xC, align 4
    VectorWS m_vGoalPosBlocked; // offset 0x80, size 0xC, align 4
    NavGravity_t m_GravityAtGoalPos; // offset 0x8C, size 0x10, align 255
    bool m_bGoalTypeSet; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0x3]; // offset 0x9D
    NavGoalType_t m_goalType; // offset 0xA0, size 0x4, align 4
    AI_NavGoalFlags_t m_goalFlags; // offset 0xA4, size 0x4, align 4
    GameTime_t m_flGoalChangeTime; // offset 0xA8, size 0x4, align 255
    GameTime_t m_flPathChangeTime; // offset 0xAC, size 0x4, align 255
    float32 m_flDistAdvancedToCurWaypoint; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x10]; // offset 0xB4
    bool m_bOnMovableNavMesh; // offset 0xC4, size 0x1, align 1
    char _pad_00C5[0x3]; // offset 0xC5
    uint32 m_unGoalActualMovableMeshId; // offset 0xC8, size 0x4, align 4
    uint32 m_unGoalBaseMovableMeshId; // offset 0xCC, size 0x4, align 4
    uint32 m_unPrevWaypointMovableMeshId; // offset 0xD0, size 0x4, align 4
    uint32 m_unPrevWaypointBaseMovableMeshId; // offset 0xD4, size 0x4, align 4
    uint32 m_unGoalActualMovableMeshId_Initial; // offset 0xD8, size 0x4, align 4
    uint32 m_unGoalBaseMovableMeshId_Initial; // offset 0xDC, size 0x4, align 4
    uint32 m_unGoalPosBlockedMovableMeshId; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x4]; // offset 0xE4
};
