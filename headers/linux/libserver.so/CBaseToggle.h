#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0xB34, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0xB38, size 0x4, align 4
    float32 m_flWait; // offset 0xB3C, size 0x4, align 4
    float32 m_flLip; // offset 0xB40, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0xB44, size 0x1, align 1
    char _pad_0B45[0x3]; // offset 0xB45
    Vector m_vecPosition1; // offset 0xB48, size 0xC, align 4
    Vector m_vecPosition2; // offset 0xB54, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0xB60, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0xB6C, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0xB78, size 0xC, align 4
    float32 m_flHeight; // offset 0xB84, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xB88, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0xB8C, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0xB98, size 0xC, align 4
    int32 m_movementType; // offset 0xBA4, size 0x4, align 4
    CUtlSymbolLarge m_sMaster; // offset 0xBA8, size 0x8, align 8
};
