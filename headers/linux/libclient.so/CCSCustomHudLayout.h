#pragma once

class CCSCustomHudLayout : public C_BaseEntity /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x788, size 0x8, align 8
    C_UtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x790, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x7F8, size 0x108, align 255
    C_NetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x900, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x918, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x930, size 0x18, align 8
    char _pad_0948[0x60]; // offset 0x948
};
