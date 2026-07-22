#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0xF70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xED0]; // offset 0x0
    Vector m_vecAxis; // offset 0xED0, size 0xC, align 4
    float32 m_flDistance; // offset 0xEDC, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0xEE0, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0xEE4, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0xEE8, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0xEEC, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0xEF0, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0xEF4, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0xF00, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0xF0C, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0xF18, size 0xC, align 4
    QAngle m_angGoal; // offset 0xF24, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0xF30, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0xF3C, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0xF48, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0xF54, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0xF60, size 0x1, align 1
    char _pad_0F61[0x3]; // offset 0xF61
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0xF64, size 0x4, align 4
    char _pad_0F68[0x8]; // offset 0xF68
};
