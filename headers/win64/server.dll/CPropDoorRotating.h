#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0x1040, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xFA0]; // offset 0x0
    Vector m_vecAxis; // offset 0xFA0, size 0xC, align 4
    float32 m_flDistance; // offset 0xFAC, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0xFB0, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0xFB4, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0xFB8, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0xFBC, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0xFC0, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0xFC4, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0xFD0, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0xFDC, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0xFE8, size 0xC, align 4
    QAngle m_angGoal; // offset 0xFF4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0x1000, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0x100C, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0x1018, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0x1024, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0x1030, size 0x1, align 1
    char _pad_1031[0x3]; // offset 0x1031
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0x1034, size 0x4, align 4
    char _pad_1038[0x8]; // offset 0x1038
};
