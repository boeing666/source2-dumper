#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xAC8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xAE0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xAF8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xB10, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xB28, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xB40, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xB70, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0xB88, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xBA0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xBA8, size 0x4, align 4
    bool m_bDisabled; // offset 0xBAC, size 0x1, align 1
    char _pad_0BAD[0xB]; // offset 0xBAD
    bool m_bUseAsyncQueries; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x7]; // offset 0xBB9
};
