#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0xAD0, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xAD4, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xAE0, size 0xC, align 4
    char _pad_0AEC[0x4]; // offset 0xAEC
    CGameSoundEventName m_soundStart; // offset 0xAF0, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0xAF8, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0xB00, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0xB08, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xB0C, size 0x4, align 4
    char _pad_0B10[0x8]; // offset 0xB10
    CEntityIOOutput m_OnFullyOpen; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xB30, size 0x18, align 255
    float32 m_flSpeed; // offset 0xB48, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xB4C, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xB4D, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0xB4E, size 0x1, align 1
    char _pad_0B4F[0x9]; // offset 0xB4F
};
