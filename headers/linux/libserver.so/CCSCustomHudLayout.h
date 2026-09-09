#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x788, size 0x8, align 8
    bool m_bObservable; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x7]; // offset 0x791
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x798, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x800, size 0x198, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x998, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x9B0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x9C8, size 0x18, align 8
    char _pad_09E0[0xF0]; // offset 0x9E0
};
