#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0xAC8, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xACC, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xAD8, size 0xC, align 4
    char _pad_0AE4[0x4]; // offset 0xAE4
    CGameSoundEventName m_soundStart; // offset 0xAE8, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0xAF0, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0xAF8, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0xB00, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xB04, size 0x4, align 4
    char _pad_0B08[0x8]; // offset 0xB08
    CEntityIOOutput m_OnFullyOpen; // offset 0xB10, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xB28, size 0x18, align 255
    float32 m_flSpeed; // offset 0xB40, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xB44, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xB45, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0xB46, size 0x1, align 1
    char _pad_0B47[0x9]; // offset 0xB47
};
