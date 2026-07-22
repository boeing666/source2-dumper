#pragma once

class CBasePropDoor : public CDynamicProp /*0x0*/  // sizeof 0xED0, align 0xFF [vtable abstract] (server) {MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    float32 m_flAutoReturnDelay; // offset 0xCE0, size 0x4, align 4
    char _pad_0CE4[0x4]; // offset 0xCE4
    CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // offset 0xCE8, size 0x18, align 8 | MNotSaved
    int32 m_nHardwareType; // offset 0xD00, size 0x4, align 4
    bool m_bNeedsHardware; // offset 0xD04, size 0x1, align 1
    char _pad_0D05[0x3]; // offset 0xD05
    DoorState_t m_eDoorState; // offset 0xD08, size 0x4, align 4 | MNetworkEnable
    bool m_bLocked; // offset 0xD0C, size 0x1, align 1 | MNetworkEnable
    bool m_bNoNPCs; // offset 0xD0D, size 0x1, align 1 | MNetworkEnable
    char _pad_0D0E[0x2]; // offset 0xD0E
    Vector m_closedPosition; // offset 0xD10, size 0xC, align 4 | MNetworkEnable
    QAngle m_closedAngles; // offset 0xD1C, size 0xC, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hBlocker; // offset 0xD28, size 0x4, align 4
    bool m_bFirstBlocked; // offset 0xD2C, size 0x1, align 1
    char _pad_0D2D[0x3]; // offset 0xD2D
    locksound_t m_ls; // offset 0xD30, size 0x20, align 255
    bool m_bForceClosed; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x3]; // offset 0xD51
    VectorWS m_vecLatchWorldPosition; // offset 0xD54, size 0xC, align 4
    CHandle< CBaseEntity > m_hActivator; // offset 0xD60, size 0x4, align 4
    char _pad_0D64[0x14]; // offset 0xD64
    CUtlSymbolLarge m_SoundMoving; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_SoundOpen; // offset 0xD80, size 0x8, align 8
    CUtlSymbolLarge m_SoundClose; // offset 0xD88, size 0x8, align 8
    CUtlSymbolLarge m_SoundLock; // offset 0xD90, size 0x8, align 8
    CUtlSymbolLarge m_SoundUnlock; // offset 0xD98, size 0x8, align 8
    CUtlSymbolLarge m_SoundLatch; // offset 0xDA0, size 0x8, align 8
    CUtlSymbolLarge m_SoundPound; // offset 0xDA8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_SoundJiggle; // offset 0xDB0, size 0x8, align 8
    CUtlSymbolLarge m_SoundLockedAnim; // offset 0xDB8, size 0x8, align 8
    int32 m_numCloseAttempts; // offset 0xDC0, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nPhysicsMaterial; // offset 0xDC4, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_SlaveName; // offset 0xDC8, size 0x8, align 8
    CHandle< CBasePropDoor > m_hMaster; // offset 0xDD0, size 0x4, align 4 | MNetworkEnable
    char _pad_0DD4[0x4]; // offset 0xDD4
    CEntityIOOutput m_OnBlockedClosing; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_OnBlockedOpening; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedClosing; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnUnblockedOpening; // offset 0xE20, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xE38, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xE50, size 0x18, align 255
    CEntityIOOutput m_OnClose; // offset 0xE68, size 0x18, align 255
    CEntityIOOutput m_OnOpen; // offset 0xE80, size 0x18, align 255
    CEntityIOOutput m_OnLockedUse; // offset 0xE98, size 0x18, align 255
    CEntityIOOutput m_OnAjarOpen; // offset 0xEB0, size 0x18, align 255
    char _pad_0EC8[0x8]; // offset 0xEC8
};
