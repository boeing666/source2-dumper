#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x1098, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x10B0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x10C8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x10E0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x10F8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x1110, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x1128, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0x1140, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0x1158, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x1170, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x1178, size 0x4, align 4
    bool m_bDisabled; // offset 0x117C, size 0x1, align 1
    char _pad_117D[0x3]; // offset 0x117D
};
