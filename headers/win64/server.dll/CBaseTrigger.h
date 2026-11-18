#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0xA30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x938]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x938, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x968, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x980, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x998, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x9B0, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x9C8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x9E0, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0x9F8, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xA10, size 0x8, align 8
    bool m_bDisabled; // offset 0xA18, size 0x1, align 1
    char _pad_0A19[0x3]; // offset 0xA19
    CHandle< CBaseFilter > m_hFilter; // offset 0xA1C, size 0x4, align 4
    char _pad_0A20[0x8]; // offset 0xA20
    bool m_bUseAsyncQueries; // offset 0xA28, size 0x1, align 1
    char _pad_0A29[0x7]; // offset 0xA29
};
