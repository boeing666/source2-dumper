#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0xA4C, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0xA50, size 0x4, align 4
    float32 m_flWait; // offset 0xA54, size 0x4, align 4
    float32 m_flLip; // offset 0xA58, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
    Vector m_vecPosition1; // offset 0xA60, size 0xC, align 4
    Vector m_vecPosition2; // offset 0xA6C, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0xA78, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0xA84, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0xA90, size 0xC, align 4
    float32 m_flHeight; // offset 0xA9C, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xAA0, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0xAA4, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0xAB0, size 0xC, align 4
    int32 m_movementType; // offset 0xABC, size 0x4, align 4
    CUtlSymbolLarge m_sMaster; // offset 0xAC0, size 0x8, align 8
};
