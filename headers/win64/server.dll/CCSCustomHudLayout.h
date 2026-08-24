#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x4A8, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x4B0, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x518, size 0x1A0, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x6B8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x6D0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x6E8, size 0x18, align 8
    char _pad_0700[0xF0]; // offset 0x700
};
