#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x4A8, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x4B0, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x518, size 0x198, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x6B0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x6C8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x6E0, size 0x18, align 8
    char _pad_06F8[0xF0]; // offset 0x6F8
};
