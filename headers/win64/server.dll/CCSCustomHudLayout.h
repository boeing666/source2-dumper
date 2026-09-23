#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x4B8, size 0x8, align 8
    bool m_bObservable; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x7]; // offset 0x4C1
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x4C8, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x530, size 0x198, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x6C8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x6E0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x6F8, size 0x18, align 8
    char _pad_0710[0x108]; // offset 0x710
};
