#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0xDA0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xBB8, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xBD0, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xBD4, size 0x1, align 1
    char _pad_0BD5[0x3]; // offset 0xBD5
    DoorState_t m_eDoorState; // offset 0xBD8, size 0x4, align 4
    bool m_bLocked; // offset 0xBDC, size 0x1, align 1
    bool m_bNoNPCs; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x2]; // offset 0xBDE
    VectorWS m_closedPosition; // offset 0xBE0, size 0xC, align 4
    QAngle m_closedAngles; // offset 0xBEC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBlocker; // offset 0xBF8, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xBFC, size 0x1, align 1
    char _pad_0BFD[0x3]; // offset 0xBFD
    locksound_t m_ls; // offset 0xC00, size 0x20, align 8
    bool m_bForceClosed; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x3]; // offset 0xC21
    VectorWS m_vecLatchWorldPosition; // offset 0xC24, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xC30, size 0x4, align 4
    float32 m_flSpeed; // offset 0xC34, size 0x4, align 4
    char _pad_0C38[0x18]; // offset 0xC38
    CGameSoundEventName m_SoundMoving; // offset 0xC50, size 0x8, align 8
    CGameSoundEventName m_SoundOpen; // offset 0xC58, size 0x8, align 8
    CGameSoundEventName m_SoundClose; // offset 0xC60, size 0x8, align 8
    CGameSoundEventName m_SoundLock; // offset 0xC68, size 0x8, align 8
    CGameSoundEventName m_SoundUnlock; // offset 0xC70, size 0x8, align 8
    CGameSoundEventName m_SoundLatch; // offset 0xC78, size 0x8, align 8
    CGameSoundEventName m_SoundPound; // offset 0xC80, size 0x8, align 8 | MNotSaved
    CGameSoundEventName m_SoundJiggle; // offset 0xC88, size 0x8, align 8
    CGameSoundEventName m_SoundLockedAnim; // offset 0xC90, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xC98, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xC9C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xCA0, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xCA8, size 0x4, align 4
    char _pad_0CAC[0x4]; // offset 0xCAC
    CEntityIOOutput m_OnBlockedClosing; // offset 0xCB0, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xCC8, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xCE0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xCF8, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xD10, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xD28, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xD40, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xD58, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xD70, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0xD88, size 0x18, align 255
};
