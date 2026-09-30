#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    AI_ArrivalDirection_t m_ArrivalDirection; // offset 0x4B0, size 0x58, align 8
    bool m_bTriggerLocomotionStop; // offset 0x508, size 0x1, align 1
    bool m_bSmoothArrival; // offset 0x509, size 0x1, align 1
    bool m_bExactPositioning; // offset 0x50A, size 0x1, align 1
    char _pad_050B[0x1]; // offset 0x50B
    float32 m_flWait; // offset 0x50C, size 0x4, align 4
    float32 m_flRadius; // offset 0x510, size 0x4, align 4
    float32 m_flWaypointSuccessRadiusWhenBlocked; // offset 0x514, size 0x4, align 4
    float32 m_flWaypointSuccessRadius; // offset 0x518, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal; // offset 0x51C, size 0x4, align 4
    float32 m_flSpeed; // offset 0x520, size 0x4, align 4
    char _pad_0524[0x4]; // offset 0x524
    CEntityIOOutput m_OnPass; // offset 0x528, size 0x18, align 255
};
