#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F8]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0x7F8, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x7FC, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x808, size 0xC, align 4
    char _pad_0814[0x4]; // offset 0x814
    CGameSoundEventName m_soundStart; // offset 0x818, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0x820, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0x828, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0x830, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x834, size 0x4, align 4
    char _pad_0838[0x8]; // offset 0x838
    CEntityIOOutput m_OnFullyOpen; // offset 0x840, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x858, size 0x18, align 255
    float32 m_flSpeed; // offset 0x870, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x874, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x875, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0x876, size 0x1, align 1
    char _pad_0877[0x9]; // offset 0x877
};
