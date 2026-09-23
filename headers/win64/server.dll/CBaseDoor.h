#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x8E0, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x8EC, size 0xC, align 4
    locksound_t m_ls; // offset 0x8F8, size 0x20, align 8 | MNotSaved
    bool m_bForceClosed; // offset 0x918, size 0x1, align 1
    bool m_bDoorGroup; // offset 0x919, size 0x1, align 1
    bool m_bLocked; // offset 0x91A, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0x91B, size 0x1, align 1
    bool m_bNoNPCs; // offset 0x91C, size 0x1, align 1
    char _pad_091D[0x3]; // offset 0x91D
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0x920, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x924, size 0x4, align 4
    CGameSoundEventName m_NoiseMoving; // offset 0x928, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x930, size 0x8, align 8
    CGameSoundEventName m_NoiseMovingClosed; // offset 0x938, size 0x8, align 8
    CGameSoundEventName m_NoiseArrivedClosed; // offset 0x940, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0x948, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0x968, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0x980, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0x998, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x9B0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x9C8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0x9E0, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0x9F8, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xA10, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0xA28, size 0x1, align 1
    char _pad_0A29[0x1F]; // offset 0xA29
    bool m_bCreateNavObstacle; // offset 0xA48, size 0x1, align 1
    char _pad_0A49[0x3]; // offset 0xA49
    float32 m_flSpeed; // offset 0xA4C, size 0x4, align 4
    bool m_isChaining; // offset 0xA50, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0xA51, size 0x1, align 1 | MNotSaved
    char _pad_0A52[0x6]; // offset 0xA52
};
