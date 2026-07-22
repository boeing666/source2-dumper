#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xB48, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xB60, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xB78, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0xB90, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xBA8, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0xBB0, size 0x4, align 4
    bool m_bDisabled; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0xB]; // offset 0xBB5
    bool m_bUseAsyncQueries; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x7]; // offset 0xBC1
};
