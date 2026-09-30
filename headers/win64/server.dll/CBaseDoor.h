#pragma once

class CBaseDoor : public CBaseToggle /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x908, size 0xC, align 4
    Vector m_vecMoveDirParentSpace; // offset 0x914, size 0xC, align 4
    locksound_t m_ls; // offset 0x920, size 0x20, align 8 | MNotSaved
    bool m_bForceClosed; // offset 0x940, size 0x1, align 1
    bool m_bDoorGroup; // offset 0x941, size 0x1, align 1
    bool m_bLocked; // offset 0x942, size 0x1, align 1
    bool m_bIgnoreDebris; // offset 0x943, size 0x1, align 1
    bool m_bNoNPCs; // offset 0x944, size 0x1, align 1
    char _pad_0945[0x3]; // offset 0x945
    FuncDoorSpawnPos_t m_eSpawnPosition; // offset 0x948, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x94C, size 0x4, align 4
    CGameSoundEventName m_NoiseMoving; // offset 0x950, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x958, size 0x8, align 8
    CGameSoundEventName m_NoiseMovingClosed; // offset 0x960, size 0x8, align 8
    CGameSoundEventName m_NoiseArrivedClosed; // offset 0x968, size 0x8, align 8
    CUtlSymbolLarge m_ChainTarget; // offset 0x970, size 0x8, align 8
    CEntityIOOutput m_OnBlockedClosing; // offset 0x978, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0x990, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0x9A8, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0x9C0, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x9D8, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x9F0, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xA08, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xA38, size 0x18, align 255
    bool m_bLoopMoveSound; // offset 0xA50, size 0x1, align 1
    char _pad_0A51[0x1F]; // offset 0xA51
    bool m_bCreateNavObstacle; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x3]; // offset 0xA71
    float32 m_flSpeed; // offset 0xA74, size 0x4, align 4
    bool m_isChaining; // offset 0xA78, size 0x1, align 1 | MNotSaved
    bool m_bIsUsable; // offset 0xA79, size 0x1, align 1 | MNotSaved
    char _pad_0A7A[0x6]; // offset 0xA7A
};
