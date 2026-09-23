#pragma once

class CPropDoorRotating : public CBasePropDoor /*0x0*/  // sizeof 0xF30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE90]; // offset 0x0
    Vector m_vecAxis; // offset 0xE90, size 0xC, align 4
    float32 m_flDistance; // offset 0xE9C, size 0x4, align 4
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // offset 0xEA0, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // offset 0xEA4, size 0x4, align 4
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // offset 0xEA8, size 0x4, align 4 | MNotSaved
    doorCheck_e m_eDefaultCheckDirection; // offset 0xEAC, size 0x4, align 4 | MNotSaved
    float32 m_flAjarAngle; // offset 0xEB0, size 0x4, align 4
    QAngle m_angRotationAjarDeprecated; // offset 0xEB4, size 0xC, align 4
    QAngle m_angRotationClosed; // offset 0xEC0, size 0xC, align 4
    QAngle m_angRotationOpenForward; // offset 0xECC, size 0xC, align 4
    QAngle m_angRotationOpenBack; // offset 0xED8, size 0xC, align 4
    QAngle m_angGoal; // offset 0xEE4, size 0xC, align 4
    Vector m_vecForwardBoundsMin; // offset 0xEF0, size 0xC, align 4 | MNotSaved
    Vector m_vecForwardBoundsMax; // offset 0xEFC, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMin; // offset 0xF08, size 0xC, align 4 | MNotSaved
    Vector m_vecBackBoundsMax; // offset 0xF14, size 0xC, align 4 | MNotSaved
    bool m_bAjarDoorShouldntAlwaysOpen; // offset 0xF20, size 0x1, align 1
    char _pad_0F21[0x3]; // offset 0xF21
    CHandle< CEntityBlocker > m_hEntityBlocker; // offset 0xF24, size 0x4, align 4
    char _pad_0F28[0x8]; // offset 0xF28
};
