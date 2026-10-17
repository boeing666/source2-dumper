#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bTriggerLocomotionStop; // offset 0x498, size 0x1, align 1
    bool m_bSmoothArrival; // offset 0x499, size 0x1, align 1
    bool m_bExactPositioning; // offset 0x49A, size 0x1, align 1
    char _pad_049B[0x1]; // offset 0x49B
    float32 m_flWait; // offset 0x49C, size 0x4, align 4
    float32 m_flRadius; // offset 0x4A0, size 0x4, align 4
    float32 m_flWaypointSuccessRadiusWhenBlocked; // offset 0x4A4, size 0x4, align 4
    float32 m_flWaypointSuccessRadius; // offset 0x4A8, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal; // offset 0x4AC, size 0x4, align 4
    float32 m_flSpeed; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CEntityIOOutput m_OnPass; // offset 0x4B8, size 0x18, align 255
};
