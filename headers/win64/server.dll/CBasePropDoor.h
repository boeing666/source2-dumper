#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0xF50, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xD60, size 0x4, align 4
    char _pad_0D64[0x4]; // offset 0xD64
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xD68, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xD80, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xD84, size 0x1, align 1
    char _pad_0D85[0x3]; // offset 0xD85
    DoorState_t m_eDoorState; // offset 0xD88, size 0x4, align 4
    bool m_bLocked; // offset 0xD8C, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xD8D, size 0x1, align 1
    char _pad_0D8E[0x2]; // offset 0xD8E
    VectorWS m_closedPosition; // offset 0xD90, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xD9C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xDA8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
    locksound_t m_ls; // offset 0xDB0, size 0x20, align 8
    bool m_bForceClosed; // offset 0xDD0, size 0x1, align 1
    char _pad_0DD1[0x3]; // offset 0xDD1
    VectorWS m_vecLatchWorldPosition; // offset 0xDD4, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xDE0, size 0x4, align 4
    float32 m_flSpeed; // offset 0xDE4, size 0x4, align 4
    char _pad_0DE8[0x18]; // offset 0xDE8
    CGameSoundEventName m_SoundMoving; // offset 0xE00, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0xE08, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0xE10, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0xE18, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0xE20, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0xE28, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0xE30, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0xE38, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0xE40, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xE48, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xE4C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xE50, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xE58, size 0x4, align 4
    char _pad_0E5C[0x4]; // offset 0xE5C
    CEntityIOOutput m_OnBlockedClosing; // offset 0xE60, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xE78, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xE90, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xEA8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xEC0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xED8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xEF0, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xF08, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xF20, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0xF38, size 0x18, align 255
};
