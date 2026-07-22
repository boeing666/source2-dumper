#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xC10, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xC28, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xC40, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xC58, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xC70, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xC88, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xCA0, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xCB8, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0xCD0, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xCE8, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xCF0, size 0x4, align 4
    bool m_bDisabled; // offset 0xCF4, size 0x1, align 1
    char _pad_0CF5[0x3]; // offset 0xCF5
};
