#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0x1150, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xF64]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xF64, size 0x4, align 4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xF68, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xF80, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xF84, size 0x1, align 1
    char _pad_0F85[0x3]; // offset 0xF85
    DoorState_t m_eDoorState; // offset 0xF88, size 0x4, align 4
    bool m_bLocked; // offset 0xF8C, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xF8D, size 0x1, align 1
    char _pad_0F8E[0x2]; // offset 0xF8E
    VectorWS m_closedPosition; // offset 0xF90, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xF9C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xFA8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xFAC, size 0x1, align 1
    char _pad_0FAD[0x3]; // offset 0xFAD
    locksound_t m_ls; // offset 0xFB0, size 0x20, align 8
    bool m_bForceClosed; // offset 0xFD0, size 0x1, align 1
    char _pad_0FD1[0x3]; // offset 0xFD1
    VectorWS m_vecLatchWorldPosition; // offset 0xFD4, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xFE0, size 0x4, align 4
    float32 m_flSpeed; // offset 0xFE4, size 0x4, align 4
    char _pad_0FE8[0x18]; // offset 0xFE8
    CGameSoundEventName m_SoundMoving; // offset 0x1000, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0x1008, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0x1010, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0x1018, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0x1020, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0x1028, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0x1030, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0x1038, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0x1040, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0x1048, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0x104C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0x1050, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0x1058, size 0x4, align 4
    char _pad_105C[0x4]; // offset 0x105C
    CEntityIOOutput m_OnBlockedClosing; // offset 0x1060, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0x1078, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0x1090, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0x10A8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x10C0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x10D8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0x10F0, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0x1108, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0x1120, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0x1138, size 0x18, align 255
};
