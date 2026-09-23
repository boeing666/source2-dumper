#pragma once

class CPathCorner : public CPointEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bTriggerLocomotionStop; // offset 0x4A8, size 0x1, align 1
    bool m_bSmoothArrival; // offset 0x4A9, size 0x1, align 1
    bool m_bExactPositioning; // offset 0x4AA, size 0x1, align 1
    char _pad_04AB[0x1]; // offset 0x4AB
    float32 m_flWait; // offset 0x4AC, size 0x4, align 4
    float32 m_flRadius; // offset 0x4B0, size 0x4, align 4
    float32 m_flWaypointSuccessRadiusWhenBlocked; // offset 0x4B4, size 0x4, align 4
    float32 m_flWaypointSuccessRadius; // offset 0x4B8, size 0x4, align 4
    float32 m_flPathEndDistanceFromGoal; // offset 0x4BC, size 0x4, align 4
    float32 m_flSpeed; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CEntityIOOutput m_OnPass; // offset 0x4C8, size 0x18, align 255
};
