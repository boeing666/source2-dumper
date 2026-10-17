#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xD30, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xD08]; // offset 0x0
    bool m_bEnabled; // offset 0xD08, size 0x1, align 1
    char _pad_0D09[0x7]; // offset 0xD09
    CUtlSymbolLarge m_DialogXMLName; // offset 0xD10, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xD18, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xD20, size 0x8, align 8
    char _pad_0D28[0x8]; // offset 0xD28
};
