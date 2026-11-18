#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x938]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0x938, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x93C, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x948, size 0xC, align 4
    char _pad_0954[0x4]; // offset 0x954
    CGameSoundEventName m_soundStart; // offset 0x958, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0x960, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0x968, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0x970, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x974, size 0x4, align 4
    char _pad_0978[0x8]; // offset 0x978
    CEntityIOOutput m_OnFullyOpen; // offset 0x980, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x998, size 0x18, align 255
    float32 m_flSpeed; // offset 0x9B0, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x9B4, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x9B5, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0x9B6, size 0x1, align 1
    char _pad_09B7[0x9]; // offset 0x9B7
};
