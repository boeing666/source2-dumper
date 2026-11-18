#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0x8B8, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0x8BC, size 0x4, align 4
    float32 m_flWait; // offset 0x8C0, size 0x4, align 4
    float32 m_flLip; // offset 0x8C4, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0x8C8, size 0x1, align 1
    char _pad_08C9[0x3]; // offset 0x8C9
    Vector m_vecPosition1; // offset 0x8CC, size 0xC, align 4
    Vector m_vecPosition2; // offset 0x8D8, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0x8E4, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0x8F0, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0x8FC, size 0xC, align 4
    float32 m_flHeight; // offset 0x908, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0x90C, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0x910, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0x91C, size 0xC, align 4
    int32 m_movementType; // offset 0x928, size 0x4, align 4
    char _pad_092C[0x4]; // offset 0x92C
    CUtlSymbolLarge m_sMaster; // offset 0x930, size 0x8, align 8
};
