#pragma once

struct AI_PathGoal_t : public CNavGoalConstraints /*0x0*/  // sizeof 0x258, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x170]; // offset 0x0
    AI_NavGoalFlags_t m_goalFlags; // offset 0x170, size 0x4, align 4
    float32 m_flWaypointSuccessRadius; // offset 0x174, size 0x4, align 4
    float32 m_flArrivalFlyingSpeedScale; // offset 0x178, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal; // offset 0x17C, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal_Repathing; // offset 0x180, size 0x4, align 4
    char _pad_0184[0x1C]; // offset 0x184
    CRelativeLocation m_goalLocation; // offset 0x1A0, size 0x48, align 8
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x1E8, size 0x4, align 4
    float32 m_flGoalSuccessRadiusWhenBlocked; // offset 0x1EC, size 0x4, align 4
    float32 m_flGoalSuccessRadius; // offset 0x1F0, size 0x4, align 4
    char _pad_01F4[0x4]; // offset 0x1F4
    AI_ArrivalDirection_t m_vArrivalDirection; // offset 0x1F8, size 0x58, align 8
    bool m_bSmoothArrival; // offset 0x250, size 0x1, align 1
    char _pad_0251[0x7]; // offset 0x251
};
