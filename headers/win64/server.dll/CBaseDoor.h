#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x800, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x80C, size 0xC, align 4
    locksound_t m_ls; // offset 0x818, size 0x20, align 8 | MNotSaved
    bool m_bForceClosed; // offset 0x838, size 0x1, align 1
    bool m_bDoorGroup; // offset 0x839, size 0x1, align 1
    bool m_bLocked; // offset 0x83A, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0x83B, size 0x1, align 1
    bool m_bNoNPCs; // offset 0x83C, size 0x1, align 1
    char _pad_083D[0x3]; // offset 0x83D
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0x840, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x844, size 0x4, align 4
    CGameSoundEventName m_NoiseMoving; // offset 0x848, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x850, size 0x8, align 8
    CGameSoundEventName m_NoiseMovingClosed; // offset 0x858, size 0x8, align 8
    CGameSoundEventName m_NoiseArrivedClosed; // offset 0x860, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0x868, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0x870, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0x888, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0x8A0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x8D0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x8E8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0x900, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0x918, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0x930, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0x948, size 0x1, align 1
    char _pad_0949[0x1F]; // offset 0x949
    bool m_bCreateNavObstacle; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x3]; // offset 0x969
    float32 m_flSpeed; // offset 0x96C, size 0x4, align 4
    bool m_isChaining; // offset 0x970, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0x971, size 0x1, align 1 | MNotSaved
    char _pad_0972[0x6]; // offset 0x972
};
