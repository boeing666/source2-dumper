#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xC08, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    bool m_bEnabled; // offset 0xBE0, size 0x1, align 1
    char _pad_0BE1[0x7]; // offset 0xBE1
    CUtlSymbolLarge m_DialogXMLName; // offset 0xBE8, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xBF0, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xBF8, size 0x8, align 8
    char _pad_0C00[0x8]; // offset 0xC00
};
