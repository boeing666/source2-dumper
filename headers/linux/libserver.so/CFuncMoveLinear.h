#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0xBA8, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xBAC, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xBB8, size 0xC, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
    CGameSoundEventName m_soundStart; // offset 0xBC8, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0xBD0, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0xBD8, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0xBE0, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xBE4, size 0x4, align 4
    char _pad_0BE8[0x8]; // offset 0xBE8
    CEntityIOOutput m_OnFullyOpen; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xC08, size 0x18, align 255
    float32 m_flSpeed; // offset 0xC20, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xC24, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xC25, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0xC26, size 0x1, align 1
    char _pad_0C27[0x9]; // offset 0xC27
};
