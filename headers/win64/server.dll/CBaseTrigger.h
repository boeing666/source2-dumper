#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x8F8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x910, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x958, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x970, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x988, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x9A0, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0x9B8, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x9D0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x9D8, size 0x4, align 4
    bool m_bDisabled; // offset 0x9DC, size 0x1, align 1
    char _pad_09DD[0xB]; // offset 0x9DD
    bool m_bUseAsyncQueries; // offset 0x9E8, size 0x1, align 1
    char _pad_09E9[0x7]; // offset 0x9E9
};
