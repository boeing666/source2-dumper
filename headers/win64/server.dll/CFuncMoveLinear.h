#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0x7F0, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x7F4, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x800, size 0xC, align 4
    char _pad_080C[0x4]; // offset 0x80C
    CGameSoundEventName m_soundStart; // offset 0x810, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0x818, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0x820, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0x828, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x82C, size 0x4, align 4
    char _pad_0830[0x8]; // offset 0x830
    CEntityIOOutput m_OnFullyOpen; // offset 0x838, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x850, size 0x18, align 255
    float32 m_flSpeed; // offset 0x868, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x86C, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x86D, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0x86E, size 0x1, align 1
    char _pad_086F[0x9]; // offset 0x86F
};
