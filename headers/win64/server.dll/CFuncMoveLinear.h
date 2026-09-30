#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0x8F8, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x8FC, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x908, size 0xC, align 4
    char _pad_0914[0x4]; // offset 0x914
    CGameSoundEventName m_soundStart; // offset 0x918, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0x920, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0x928, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0x930, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x934, size 0x4, align 4
    char _pad_0938[0x8]; // offset 0x938
    CEntityIOOutput m_OnFullyOpen; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x958, size 0x18, align 255
    float32 m_flSpeed; // offset 0x970, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x974, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x975, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0x976, size 0x1, align 1
    char _pad_0977[0x9]; // offset 0x977
};
