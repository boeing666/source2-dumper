#pragma once

class CCSCustomHudLayout : public CBaseEntity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x788, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x790, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x7F8, size 0x198, align 255
    CNetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x990, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x9A8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x9C0, size 0x18, align 8
    char _pad_09D8[0xF0]; // offset 0x9D8
};
