#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0x770, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0x774, size 0x4, align 4
    float32 m_flWait; // offset 0x778, size 0x4, align 4
    float32 m_flLip; // offset 0x77C, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    Vector m_vecPosition1; // offset 0x784, size 0xC, align 4
    Vector m_vecPosition2; // offset 0x790, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0x79C, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0x7A8, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0x7B4, size 0xC, align 4
    float32 m_flHeight; // offset 0x7C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0x7C4, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0x7C8, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0x7D4, size 0xC, align 4
    int32 m_movementType; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
    CUtlSymbolLarge m_sMaster; // offset 0x7E8, size 0x8, align 8
};
