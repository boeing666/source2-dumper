#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xFB0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xFC8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xFE0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xFF8, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x1010, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x1028, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x1040, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x1058, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0x1070, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x1088, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x1090, size 0x4, align 4
    bool m_bDisabled; // offset 0x1094, size 0x1, align 1
    char _pad_1095[0x3]; // offset 0x1095
};
