#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x9D8, align 0xFF [vtable abstract] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    bool m_bEnabled; // offset 0x9B0, size 0x1, align 1 | MNetworkEnable
    char _pad_09B1[0x7]; // offset 0x9B1
    CUtlSymbolLarge m_DialogXMLName; // offset 0x9B8, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_PanelClassName; // offset 0x9C0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_PanelID; // offset 0x9C8, size 0x8, align 8 | MNetworkEnable
    char _pad_09D0[0x8]; // offset 0x9D0
};
