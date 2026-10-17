#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bTriggerLocomotionStop; // offset 0x778, size 0x1, align 1
    bool m_bSmoothArrival; // offset 0x779, size 0x1, align 1
    bool m_bExactPositioning; // offset 0x77A, size 0x1, align 1
    char _pad_077B[0x1]; // offset 0x77B
    float32 m_flWait; // offset 0x77C, size 0x4, align 4
    float32 m_flRadius; // offset 0x780, size 0x4, align 4
    float32 m_flWaypointSuccessRadiusWhenBlocked; // offset 0x784, size 0x4, align 4
    float32 m_flWaypointSuccessRadius; // offset 0x788, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal; // offset 0x78C, size 0x4, align 4
    float32 m_flSpeed; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CEntityIOOutput m_OnPass; // offset 0x798, size 0x18, align 255
};
