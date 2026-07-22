#pragma once

class C_BaseTrigger : public C_BaseToggle /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x9A8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x9C0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x9D8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x9F0, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xA08, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xA38, size 0x18, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities; // offset 0xA50, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xA68, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xA70, size 0x4, align 4
    bool m_bDisabled; // offset 0xA74, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A75[0x3]; // offset 0xA75
};
