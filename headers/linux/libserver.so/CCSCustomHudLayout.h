#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x798, size 0x8, align 8
    bool m_bObservable; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x7]; // offset 0x7A1
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x7A8, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x810, size 0x198, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x9A8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x9C0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x9D8, size 0x18, align 8
    char _pad_09F0[0x108]; // offset 0x9F0
};
