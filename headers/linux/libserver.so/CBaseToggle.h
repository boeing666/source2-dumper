#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0xC18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0xB9C, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0xBA0, size 0x4, align 4
    float32 m_flWait; // offset 0xBA4, size 0x4, align 4
    float32 m_flLip; // offset 0xBA8, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0xBAC, size 0x1, align 1
    char _pad_0BAD[0x3]; // offset 0xBAD
    Vector m_vecPosition1; // offset 0xBB0, size 0xC, align 4
    Vector m_vecPosition2; // offset 0xBBC, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0xBC8, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0xBD4, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0xBE0, size 0xC, align 4
    float32 m_flHeight; // offset 0xBEC, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xBF0, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0xBF4, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0xC00, size 0xC, align 4
    int32 m_movementType; // offset 0xC0C, size 0x4, align 4
    CUtlSymbolLarge m_sMaster; // offset 0xC10, size 0x8, align 8
};
