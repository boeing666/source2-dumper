#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xBA8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xC50, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0xC68, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xC80, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xC88, size 0x4, align 4
    bool m_bDisabled; // offset 0xC8C, size 0x1, align 1
    char _pad_0C8D[0xB]; // offset 0xC8D
    bool m_bUseAsyncQueries; // offset 0xC98, size 0x1, align 1
    char _pad_0C99[0x7]; // offset 0xC99
};
