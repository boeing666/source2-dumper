#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    bool m_bEnabled; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x7]; // offset 0xBB9
    CUtlSymbolLarge m_DialogXMLName; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xBD0, size 0x8, align 8
    char _pad_0BD8[0x8]; // offset 0xBD8
};
