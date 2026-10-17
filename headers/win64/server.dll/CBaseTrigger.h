#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x8F0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x908, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x920, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x938, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x968, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x980, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0x998, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x9B0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x9B8, size 0x4, align 4
    bool m_bDisabled; // offset 0x9BC, size 0x1, align 1
    char _pad_09BD[0xB]; // offset 0x9BD
    bool m_bUseAsyncQueries; // offset 0x9C8, size 0x1, align 1
    char _pad_09C9[0x7]; // offset 0x9C9
};
