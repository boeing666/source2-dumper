#pragma once

class CBaseToggle : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    TOGGLE_STATE m_toggle_state; // offset 0x858, size 0x4, align 4
    float32 m_flMoveDistance; // offset 0x85C, size 0x4, align 4
    float32 m_flWait; // offset 0x860, size 0x4, align 4
    float32 m_flLip; // offset 0x864, size 0x4, align 4
    bool m_bAlwaysFireBlockedOutputs; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    Vector m_vecPosition1; // offset 0x86C, size 0xC, align 4
    Vector m_vecPosition2; // offset 0x878, size 0xC, align 4
    QAngle m_vecMoveAng; // offset 0x884, size 0xC, align 4
    QAngle m_vecAngle1; // offset 0x890, size 0xC, align 4
    QAngle m_vecAngle2; // offset 0x89C, size 0xC, align 4
    float32 m_flHeight; // offset 0x8A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0x8AC, size 0x4, align 4
    Vector m_vecFinalDest; // offset 0x8B0, size 0xC, align 4
    QAngle m_vecFinalAngle; // offset 0x8BC, size 0xC, align 4
    int32 m_movementType; // offset 0x8C8, size 0x4, align 4
    char _pad_08CC[0x4]; // offset 0x8CC
    CUtlSymbolLarge m_sMaster; // offset 0x8D0, size 0x8, align 8
};
