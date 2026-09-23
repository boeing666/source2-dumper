#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0xBA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0xB2C, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0xB30, size 0x4, align 4
    float32 m_flWait; // offset 0xB34, size 0x4, align 4
    float32 m_flLip; // offset 0xB38, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0xB3C, size 0x1, align 1
    char _pad_0B3D[0x3]; // offset 0xB3D
    Vector m_vecPosition1; // offset 0xB40, size 0xC, align 4
    Vector m_vecPosition2; // offset 0xB4C, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0xB58, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0xB64, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0xB70, size 0xC, align 4
    float32 m_flHeight; // offset 0xB7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xB80, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0xB84, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0xB90, size 0xC, align 4
    int32 m_movementType; // offset 0xB9C, size 0x4, align 4
    CUtlSymbolLarge m_sMaster; // offset 0xBA0, size 0x8, align 8
};
