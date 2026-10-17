#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0xC60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xB78, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xB90, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xBA8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xC20, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0xC38, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xC50, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xC58, size 0x4, align 4
    bool m_bDisabled; // offset 0xC5C, size 0x1, align 1
    char _pad_0C5D[0x3]; // offset 0xC5D
};
