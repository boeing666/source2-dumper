#pragma once

struct AI_NavGoal_t  // sizeof 0xC0, align 0xFF (server)
{
    char _pad_0000[0x18]; // offset 0x0
    NavGoalType_t m_type; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CRelativeLocation m_navLocation; // offset 0x20, size 0x40, align 255
    float32 m_flGoalBlockedTolerance; // offset 0x60, size 0x4, align 4
    float32 m_flPathEndGoalRange; // offset 0x64, size 0x4, align 4
    float32 m_flPathEndGoalRange_Repathing; // offset 0x68, size 0x4, align 4
    AI_NavGoalFlags_t m_goalFlags; // offset 0x6C, size 0x4, align 4
    CHandle< CBaseEntity > m_pTarget; // offset 0x70, size 0x4, align 4
    VectorWS m_vThreatPos; // offset 0x74, size 0xC, align 4
    float32 m_flMaxPathLength; // offset 0x80, size 0x4, align 4
    float32 m_flMaxTravelDist; // offset 0x84, size 0x4, align 4
    float32 m_flMaxTravelDistAdditionalFromRepath; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
    CUtlString m_markupTagRequired; // offset 0x90, size 0x8, align 8
    float32 m_flGoalArrivalTolerance; // offset 0x98, size 0x4, align 4
    StanceType_t m_eMoveStance; // offset 0x9C, size 0x4, align 4
    StanceType_t m_eArrivalStance; // offset 0xA0, size 0x4, align 4
    float32 m_flArrivalFlyingSpeedScale; // offset 0xA4, size 0x4, align 4
    float32 m_flArrivalDirectionToleranceDot; // offset 0xA8, size 0x4, align 4
    Vector m_vArrivalDirection; // offset 0xAC, size 0xC, align 4
    CGlobalSymbol m_sArrivalMovementGaitSet; // offset 0xB8, size 0x8, align 8
};
