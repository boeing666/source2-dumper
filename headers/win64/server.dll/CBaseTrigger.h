#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x800, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x818, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x830, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x848, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0x860, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0x878, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0x890, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0x8A8, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0x8C0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x8C8, size 0x4, align 4
    bool m_bDisabled; // offset 0x8CC, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_08CD[0xB]; // offset 0x8CD
    bool m_bUseAsyncQueries; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x7]; // offset 0x8D9
};
