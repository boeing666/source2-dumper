#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0x1070, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xE84]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xE84, size 0x4, align 4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xE88, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xEA0, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xEA4, size 0x1, align 1
    char _pad_0EA5[0x3]; // offset 0xEA5
    DoorState_t m_eDoorState; // offset 0xEA8, size 0x4, align 4
    bool m_bLocked; // offset 0xEAC, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xEAD, size 0x1, align 1
    char _pad_0EAE[0x2]; // offset 0xEAE
    VectorWS m_closedPosition; // offset 0xEB0, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xEBC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xEC8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xECC, size 0x1, align 1
    char _pad_0ECD[0x3]; // offset 0xECD
    locksound_t m_ls; // offset 0xED0, size 0x20, align 8
    bool m_bForceClosed; // offset 0xEF0, size 0x1, align 1
    char _pad_0EF1[0x3]; // offset 0xEF1
    VectorWS m_vecLatchWorldPosition; // offset 0xEF4, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xF00, size 0x4, align 4
    float32 m_flSpeed; // offset 0xF04, size 0x4, align 4
    char _pad_0F08[0x18]; // offset 0xF08
    CGameSoundEventName m_SoundMoving; // offset 0xF20, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0xF28, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0xF30, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0xF38, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0xF40, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0xF48, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0xF50, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0xF58, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0xF60, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xF68, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xF6C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xF70, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xF78, size 0x4, align 4
    char _pad_0F7C[0x4]; // offset 0xF7C
    CEntityIOOutput m_OnBlockedClosing; // offset 0xF80, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xF98, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xFB0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xFC8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xFE0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xFF8, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0x1010, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0x1028, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0x1040, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0x1058, size 0x18, align 255
};
