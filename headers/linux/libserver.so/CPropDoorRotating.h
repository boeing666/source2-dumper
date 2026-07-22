#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0x1110, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    Vector m_vecAxis; // offset 0x1070, size 0xC, align 4
    float32 m_flDistance; // offset 0x107C, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0x1080, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0x1084, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0x1088, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0x108C, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0x1090, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0x1094, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0x10A0, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0x10AC, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0x10B8, size 0xC, align 4
    QAngle m_angGoal; // offset 0x10C4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0x10D0, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0x10DC, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0x10E8, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0x10F4, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0x1100, size 0x1, align 1
    char _pad_1101[0x3]; // offset 0x1101
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0x1104, size 0x4, align 4
    char _pad_1108[0x8]; // offset 0x1108
};
