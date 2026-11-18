#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0xC18, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0xC1C, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xC28, size 0xC, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    CGameSoundEventName m_soundStart; // offset 0xC38, size 0x8, align 8
    CGameSoundEventName m_soundStop; // offset 0xC40, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0xC48, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0xC50, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xC54, size 0x4, align 4
    char _pad_0C58[0x8]; // offset 0xC58
    CEntityIOOutput m_OnFullyOpen; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xC78, size 0x18, align 255
    float32 m_flSpeed; // offset 0xC90, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xC94, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xC95, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0xC96, size 0x1, align 1
    char _pad_0C97[0x9]; // offset 0xC97
};
