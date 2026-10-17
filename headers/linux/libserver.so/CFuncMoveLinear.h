#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0xC38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0xBB0, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xBB4, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xBC0, size 0xC, align 4
    char _pad_0BCC[0x4]; // offset 0xBCC
    CGameSoundEventName m_soundStart; // offset 0xBD0, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0xBD8, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0xBE0, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0xBE8, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xBEC, size 0x4, align 4
    char _pad_0BF0[0x8]; // offset 0xBF0
    CEntityIOOutput m_OnFullyOpen; // offset 0xBF8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xC10, size 0x18, align 255
    float32 m_flSpeed; // offset 0xC28, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xC2C, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xC2D, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0xC2E, size 0x1, align 1
    char _pad_0C2F[0x9]; // offset 0xC2F
};
