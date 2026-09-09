#pragma once

class CCSCustomHudLayout : public C_BaseEntity /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x798, size 0x8, align 8
    bool m_bObservable; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x7]; // offset 0x7A1
    C_UtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x7A8, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x810, size 0x108, align 255
    C_NetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x918, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x930, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x948, size 0x18, align 8
    char _pad_0960[0x60]; // offset 0x960
};
