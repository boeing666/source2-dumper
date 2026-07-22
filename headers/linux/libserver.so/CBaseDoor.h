#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD4]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0xAD4, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0xAE0, size 0xC, align 4
    char _pad_0AEC[0x4]; // offset 0xAEC
    locksound_t m_ls; // offset 0xAF0, size 0x20, align 8 | MNotSaved
    bool m_bForceClosed; // offset 0xB10, size 0x1, align 1
    bool m_bDoorGroup; // offset 0xB11, size 0x1, align 1
    bool m_bLocked; // offset 0xB12, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0xB13, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xB14, size 0x1, align 1
    char _pad_0B15[0x3]; // offset 0xB15
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0xB18, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xB1C, size 0x4, align 4
    CGameSoundEventName m_NoiseMoving; // offset 0xB20, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0xB28, size 0x8, align 8
    CGameSoundEventName m_NoiseMovingClosed; // offset 0xB30, size 0x8, align 8
    CGameSoundEventName m_NoiseArrivedClosed; // offset 0xB38, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0xB40, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0xB48, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xB60, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xB78, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xB90, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xBA8, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xC08, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x1F]; // offset 0xC21
    bool m_bCreateNavObstacle; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    float32 m_flSpeed; // offset 0xC44, size 0x4, align 4
    bool m_isChaining; // offset 0xC48, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0xC49, size 0x1, align 1 | MNotSaved
    char _pad_0C4A[0x6]; // offset 0xC4A
};
