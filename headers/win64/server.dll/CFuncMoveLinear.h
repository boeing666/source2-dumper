#pragma once

class CFuncMoveLinear : public CBaseToggle /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkOverride}
{
public:
    char _pad_0000[0x800]; // offset 0x0
    MoveLinearAuthoredPos_t m_authoredPosition; // offset 0x800, size 0x4, align 4
    QAngle m_angMoveEntitySpace; // offset 0x804, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x810, size 0xC, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CUtlSymbolLarge m_soundStart; // offset 0x820, size 0x8, align 8
    CUtlSymbolLarge m_soundStop; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_currentSound; // offset 0x830, size 0x8, align 8
    float32 m_flBlockDamage; // offset 0x838, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x83C, size 0x4, align 4
    char _pad_0840[0x8]; // offset 0x840
    CEntityIOOutput m_OnFullyOpen; // offset 0x848, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x860, size 0x18, align 255
    bool m_bCreateMovableNavMesh; // offset 0x878, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x879, size 0x1, align 1
    bool m_bCreateNavObstacle; // offset 0x87A, size 0x1, align 1
    char _pad_087B[0xD]; // offset 0x87B
};
