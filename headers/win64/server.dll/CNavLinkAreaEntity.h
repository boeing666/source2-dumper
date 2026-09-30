#pragma once

class CNavLinkAreaEntity : public CPointEntity /*0x0*/  // sizeof 0x640, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flWidth; // offset 0x4B0, size 0x4, align 4
    Vector m_vLocatorOffset; // offset 0x4B4, size 0xC, align 4
    QAngle m_qLocatorAnglesOffset; // offset 0x4C0, size 0xC, align 4
    VectorWS m_vPrevEntry; // offset 0x4CC, size 0xC, align 4
    VectorWS m_vPrevExit; // offset 0x4D8, size 0xC, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
    CUtlSymbolLarge m_strEndLocatorParentName; // offset 0x4E8, size 0x8, align 8
    CHandle< CBaseEntity > m_hEndLocatorParent; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0xC]; // offset 0x4F4
    CRelativeTransform m_endLocator; // offset 0x500, size 0x60, align 16
    CUtlSymbolLarge m_strMovementForward; // offset 0x560, size 0x8, align 8
    CUtlSymbolLarge m_strMovementReverse; // offset 0x568, size 0x8, align 8
    char _pad_0570[0x48]; // offset 0x570
    bool m_bEnabled; // offset 0x5B8, size 0x1, align 1
    bool m_bAllowCrossMovableConnections; // offset 0x5B9, size 0x1, align 1
    bool m_bSuspendConnectionsWhileMoving; // offset 0x5BA, size 0x1, align 1
    char _pad_05BB[0x5]; // offset 0x5BB
    CUtlSymbolLarge m_strFilterName; // offset 0x5C0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x5C8, size 0x4, align 4
    char _pad_05CC[0x4]; // offset 0x5CC
    CEntityIOOutput m_OnNavLinkStart; // offset 0x5D0, size 0x18, align 255
    CEntityIOOutput m_OnNavLinkFinish; // offset 0x5E8, size 0x18, align 255
    bool m_bIsTerminus; // offset 0x600, size 0x1, align 1
    bool m_bIsAutoAdjustForward; // offset 0x601, size 0x1, align 1
    char _pad_0602[0x6]; // offset 0x602
    CUtlVector< CNavLinkConnectionSave > m_vecSavedConnections; // offset 0x608, size 0x18, align 8
    CUtlVector< CNavLinkAreaEntity::NpcUserList_t > m_vecNpcUsersByNavLink; // offset 0x620, size 0x18, align 8
    int32 m_nProcessOrder; // offset 0x638, size 0x4, align 4
    int32 m_nSplits; // offset 0x63C, size 0x4, align 4
};
