#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB4]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0xBB4, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xBC0, size 0xC, align 4
    char _pad_0BCC[0x4]; // offset 0xBCC
    locksound_t m_ls; // offset 0xBD0, size 0x20, align 8 | MNotSaved
    bool m_bForceClosed; // offset 0xBF0, size 0x1, align 1
    bool m_bDoorGroup; // offset 0xBF1, size 0x1, align 1
    bool m_bLocked; // offset 0xBF2, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0xBF3, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xBF4, size 0x1, align 1
    char _pad_0BF5[0x3]; // offset 0xBF5
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0xBF8, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xBFC, size 0x4, align 4
    CGameSoundEventName m_NoiseMoving; // offset 0xC00, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0xC08, size 0x8, align 8
    CGameSoundEventName m_NoiseMovingClosed; // offset 0xC10, size 0x8, align 8
    CGameSoundEventName m_NoiseArrivedClosed; // offset 0xC18, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0xC20, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0xC28, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xC40, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xC58, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xC70, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xC88, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xCA0, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xCB8, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xCD0, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xCE8, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x1F]; // offset 0xD01
    bool m_bCreateNavObstacle; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0x3]; // offset 0xD21
    float32 m_flSpeed; // offset 0xD24, size 0x4, align 4
    bool m_isChaining; // offset 0xD28, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0xD29, size 0x1, align 1 | MNotSaved
    char _pad_0D2A[0x6]; // offset 0xD2A
};
