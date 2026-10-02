#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0xFA0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x4]; // offset 0xDB4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xDB8, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xDD0, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xDD4, size 0x1, align 1
    char _pad_0DD5[0x3]; // offset 0xDD5
    DoorState_t m_eDoorState; // offset 0xDD8, size 0x4, align 4
    bool m_bLocked; // offset 0xDDC, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xDDD, size 0x1, align 1
    char _pad_0DDE[0x2]; // offset 0xDDE
    VectorWS m_closedPosition; // offset 0xDE0, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xDEC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xDF8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xDFC, size 0x1, align 1
    char _pad_0DFD[0x3]; // offset 0xDFD
    locksound_t m_ls; // offset 0xE00, size 0x20, align 8
    bool m_bForceClosed; // offset 0xE20, size 0x1, align 1
    char _pad_0E21[0x3]; // offset 0xE21
    VectorWS m_vecLatchWorldPosition; // offset 0xE24, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xE30, size 0x4, align 4
    float32 m_flSpeed; // offset 0xE34, size 0x4, align 4
    char _pad_0E38[0x18]; // offset 0xE38
    CGameSoundEventName m_SoundMoving; // offset 0xE50, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0xE58, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0xE60, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0xE68, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0xE70, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0xE78, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0xE80, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0xE88, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0xE90, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xE98, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xE9C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xEA0, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xEA8, size 0x4, align 4
    char _pad_0EAC[0x4]; // offset 0xEAC
    CEntityIOOutput m_OnBlockedClosing; // offset 0xEB0, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xEC8, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xEE0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xEF8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xF10, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xF28, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xF40, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xF58, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xF70, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0xF88, size 0x18, align 255
};
