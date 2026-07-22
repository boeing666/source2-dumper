#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0x780, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0x784, size 0x4, align 4
    float32 m_flWait; // offset 0x788, size 0x4, align 4
    float32 m_flLip; // offset 0x78C, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    Vector m_vecPosition1; // offset 0x794, size 0xC, align 4
    Vector m_vecPosition2; // offset 0x7A0, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0x7AC, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0x7B8, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0x7C4, size 0xC, align 4
    float32 m_flHeight; // offset 0x7D0, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0x7D4, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0x7D8, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0x7E4, size 0xC, align 4
    int32 m_movementType; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
    CUtlSymbolLarge m_sMaster; // offset 0x7F8, size 0x8, align 8
};
