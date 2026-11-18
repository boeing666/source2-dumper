#pragma once

class CBaseTrigger : public CBaseToggle /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xC18, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_OnTouching; // offset 0xC78, size 0x18, align 255
    CEntityIOOutput m_OnTouchingEachEntity; // offset 0xC90, size 0x18, align 255
    CEntityIOOutput m_OnNotTouching; // offset 0xCA8, size 0x18, align 255
    CEntityIOOutput m_OnTouchingChanged; // offset 0xCC0, size 0x18, align 255
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // offset 0xCD8, size 0x18, align 8
    CUtlSymbolLarge m_iFilterName; // offset 0xCF0, size 0x8, align 8
    bool m_bDisabled; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    CHandle< CBaseFilter > m_hFilter; // offset 0xCFC, size 0x4, align 4
    char _pad_0D00[0x8]; // offset 0xD00
    bool m_bUseAsyncQueries; // offset 0xD08, size 0x1, align 1
    char _pad_0D09[0x7]; // offset 0xD09
};
