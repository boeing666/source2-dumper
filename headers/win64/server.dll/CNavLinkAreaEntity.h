#pragma once

class CNavLinkAreaEntity : public CPointEntity /*0x0*/  // sizeof 0x630, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flWidth; // offset 0x4A0, size 0x4, align 4
    Vector m_vLocatorOffset; // offset 0x4A4, size 0xC, align 4
    QAngle m_qLocatorAnglesOffset; // offset 0x4B0, size 0xC, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_strEndLocatorParentName; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEndLocatorParent; // offset 0x4C8, size 0x4, align 4
    char _pad_04CC[0x4]; // offset 0x4CC
    CRelativeTransform m_endLocator; // offset 0x4D0, size 0x30, align 16
    CUtlSymbolLarge m_strMovementForward; // offset 0x500, size 0x8, align 8
    CUtlSymbolLarge m_strMovementReverse; // offset 0x508, size 0x8, align 8
    char _pad_0510[0x30]; // offset 0x510
    bool m_bEnabled; // offset 0x540, size 0x1, align 1
    bool m_bAllowCrossMovableConnections; // offset 0x541, size 0x1, align 1
    char _pad_0542[0x6]; // offset 0x542
    CUtlSymbolLarge m_strFilterName; // offset 0x548, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x550, size 0x4, align 4
    char _pad_0554[0x4]; // offset 0x554
    CEntityIOOutput m_OnNavLinkStart; // offset 0x558, size 0x18, align 255
    CEntityIOOutput m_OnNavLinkFinish; // offset 0x570, size 0x18, align 255
    bool m_bIsTerminus; // offset 0x588, size 0x1, align 1
    char _pad_0589[0x7]; // offset 0x589
    CUtlVector< CNavLinkConnectionSave > m_vecSavedConnections; // offset 0x590, size 0x18, align 8
    CUtlVector< CNavLinkAreaEntity::NpcUserList_t > m_vecNpcUsersByNavLink; // offset 0x5A8, size 0x18, align 8
    CUtlSymbolLarge m_szListenForAnimTag; // offset 0x5C0, size 0x8, align 8
    bool m_bIsListeningForAnimTag; // offset 0x5C8, size 0x1, align 1
    char _pad_05C9[0xF]; // offset 0x5C9
    CEntityIOOutput m_OnAnimTagFired; // offset 0x5D8, size 0x18, align 255
    CEntityIOOutput m_OnAnimTagStart; // offset 0x5F0, size 0x18, align 255
    CEntityIOOutput m_OnAnimTagEnd; // offset 0x608, size 0x18, align 255
    int32 m_nProcessOrder; // offset 0x620, size 0x4, align 4
    int32 m_nSplits; // offset 0x624, size 0x4, align 4
    char _pad_0628[0x8]; // offset 0x628
};
