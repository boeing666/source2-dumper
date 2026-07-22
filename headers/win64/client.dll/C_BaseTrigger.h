#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0xB70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xB30, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0xB48, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xB60, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xB68, size 0x4, align 4
    bool m_bDisabled; // offset 0xB6C, size 0x1, align 1
    char _pad_0B6D[0x3]; // offset 0xB6D
};
