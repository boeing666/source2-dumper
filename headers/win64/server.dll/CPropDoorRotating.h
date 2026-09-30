#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0xFF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF50]; // offset 0x0
    Vector m_vecAxis; // offset 0xF50, size 0xC, align 4
    float32 m_flDistance; // offset 0xF5C, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0xF60, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0xF64, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0xF68, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0xF6C, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0xF70, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0xF74, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0xF80, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0xF8C, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0xF98, size 0xC, align 4
    QAngle m_angGoal; // offset 0xFA4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0xFB0, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0xFBC, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0xFC8, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0xFD4, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0xFE0, size 0x1, align 1
    char _pad_0FE1[0x3]; // offset 0xFE1
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0xFE4, size 0x4, align 4
    char _pad_0FE8[0x8]; // offset 0xFE8
};
