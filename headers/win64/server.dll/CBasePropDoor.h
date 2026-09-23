#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0xE90, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xCA8, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xCC0, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xCC4, size 0x1, align 1
    char _pad_0CC5[0x3]; // offset 0xCC5
    DoorState_t m_eDoorState; // offset 0xCC8, size 0x4, align 4
    bool m_bLocked; // offset 0xCCC, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xCCD, size 0x1, align 1
    char _pad_0CCE[0x2]; // offset 0xCCE
    VectorWS m_closedPosition; // offset 0xCD0, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xCDC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xCE8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xCEC, size 0x1, align 1
    char _pad_0CED[0x3]; // offset 0xCED
    locksound_t m_ls; // offset 0xCF0, size 0x20, align 8
    bool m_bForceClosed; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x3]; // offset 0xD11
    VectorWS m_vecLatchWorldPosition; // offset 0xD14, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xD20, size 0x4, align 4
    float32 m_flSpeed; // offset 0xD24, size 0x4, align 4
    char _pad_0D28[0x18]; // offset 0xD28
    CGameSoundEventName m_SoundMoving; // offset 0xD40, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0xD48, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0xD50, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0xD58, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0xD60, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0xD68, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0xD70, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0xD78, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0xD80, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xD88, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xD8C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xD90, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xD98, size 0x4, align 4
    char _pad_0D9C[0x4]; // offset 0xD9C
    CEntityIOOutput m_OnBlockedClosing; // offset 0xDA0, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xDB8, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xDD0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xDE8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xE00, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xE18, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xE30, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xE48, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xE60, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0xE78, size 0x18, align 255
};
