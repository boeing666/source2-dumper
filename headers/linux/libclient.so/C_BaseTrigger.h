#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0xE50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xD68, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xD80, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xD98, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xDB0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xDC8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xDE0, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xDF8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xE10, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0xE28, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xE40, size 0x8, align 8
    bool m_bDisabled; // offset 0xE48, size 0x1, align 1
    char _pad_0E49[0x3]; // offset 0xE49
    CHandle< CBaseFilter > m_hFilter; // offset 0xE4C, size 0x4, align 4
};
