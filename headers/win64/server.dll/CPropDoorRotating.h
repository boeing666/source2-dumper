#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0xE40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    Vector m_vecAxis; // offset 0xDA0, size 0xC, align 4
    float32 m_flDistance; // offset 0xDAC, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0xDB0, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0xDB4, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0xDB8, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0xDBC, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0xDC0, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0xDC4, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0xDD0, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0xDDC, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0xDE8, size 0xC, align 4
    QAngle m_angGoal; // offset 0xDF4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0xE00, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0xE0C, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0xE18, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0xE24, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0xE30, size 0x1, align 1
    char _pad_0E31[0x3]; // offset 0xE31
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0xE34, size 0x4, align 4
    char _pad_0E38[0x8]; // offset 0xE38
};
