#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x810]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x810, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x81C, size 0xC, align 4
    locksound_t m_ls; // offset 0x828, size 0x20, align 255 | MNotSaved
    bool m_bForceClosed; // offset 0x848, size 0x1, align 1
    bool m_bDoorGroup; // offset 0x849, size 0x1, align 1
    bool m_bLocked; // offset 0x84A, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0x84B, size 0x1, align 1
    bool m_bNoNPCs; // offset 0x84C, size 0x1, align 1
    char _pad_084D[0x3]; // offset 0x84D
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0x850, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x854, size 0x4, align 4
    CUtlSymbolLarge m_NoiseMoving; // offset 0x858, size 0x8, align 8
    CUtlSymbolLarge m_NoiseArrived; // offset 0x860, size 0x8, align 8
    CUtlSymbolLarge m_NoiseMovingClosed; // offset 0x868, size 0x8, align 8
    CUtlSymbolLarge m_NoiseArrivedClosed; // offset 0x870, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0x878, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0x880, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0x898, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0x8B0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0x8C8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x8E0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x8F8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0x910, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0x940, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0x958, size 0x1, align 1
    char _pad_0959[0x1F]; // offset 0x959
    bool m_bCreateNavObstacle; // offset 0x978, size 0x1, align 1
    bool m_isChaining; // offset 0x979, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0x97A, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_097B[0x5]; // offset 0x97B
};
