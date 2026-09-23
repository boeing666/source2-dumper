#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0x11F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1150]; // offset 0x0
    Vector m_vecAxis; // offset 0x1150, size 0xC, align 4
    float32 m_flDistance; // offset 0x115C, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0x1160, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0x1164, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0x1168, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0x116C, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0x1170, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0x1174, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0x1180, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0x118C, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0x1198, size 0xC, align 4
    QAngle m_angGoal; // offset 0x11A4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0x11B0, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0x11BC, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0x11C8, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0x11D4, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0x11E0, size 0x1, align 1
    char _pad_11E1[0x3]; // offset 0x11E1
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0x11E4, size 0x4, align 4
    char _pad_11E8[0x8]; // offset 0x11E8
};
