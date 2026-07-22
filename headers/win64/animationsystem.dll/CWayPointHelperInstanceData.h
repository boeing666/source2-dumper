#pragma once

class CWayPointHelperInstanceData  // sizeof 0x28, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    Vector m_vMovement; // offset 0x0, size 0xC, align 4
    QAngle m_vRotation; // offset 0xC, size 0xC, align 4
    Vector m_vWaypointPosWS; // offset 0x18, size 0xC, align 4
    bool m_bStopUpdatingWaypointPos; // offset 0x24, size 0x1, align 1
    char _pad_0025[0x3]; // offset 0x25
};
