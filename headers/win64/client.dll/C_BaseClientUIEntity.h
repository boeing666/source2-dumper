#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xBA8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    bool m_bEnabled; // offset 0xB80, size 0x1, align 1
    char _pad_0B81[0x7]; // offset 0xB81
    CUtlSymbolLarge m_DialogXMLName; // offset 0xB88, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xB90, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xB98, size 0x8, align 8
    char _pad_0BA0[0x8]; // offset 0xBA0
};
