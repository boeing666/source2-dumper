#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x7F8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x810, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x828, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x840, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x858, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x870, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x888, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x8A0, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0x8B8, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x8D0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x8D8, size 0x4, align 4
    bool m_bDisabled; // offset 0x8DC, size 0x1, align 1
    char _pad_08DD[0xB]; // offset 0x8DD
    bool m_bUseAsyncQueries; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
};
