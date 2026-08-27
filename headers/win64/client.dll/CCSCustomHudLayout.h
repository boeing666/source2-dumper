#pragma once

class CCSCustomHudLayout : public C_BaseEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CUtlSymbolLarge m_strLayout; // offset 0x608, size 0x8, align 8
    C_UtlVectorEmbeddedNetworkVar< CCSCustomHudLayoutState > m_vecPlayerLayoutStates; // offset 0x610, size 0x68, align 8
    CCSCustomHudLayoutState m_globalLayoutState; // offset 0x678, size 0x108, align 255
    C_NetworkUtlVectorBase< CUtlString > m_vecPanelIds; // offset 0x780, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecClassNames; // offset 0x798, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_vecDialogVariableNames; // offset 0x7B0, size 0x18, align 8
    char _pad_07C8[0x60]; // offset 0x7C8
};
