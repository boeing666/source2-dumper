#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xFE0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xFB8]; // offset 0x0
    bool m_bEnabled; // offset 0xFB8, size 0x1, align 1
    char _pad_0FB9[0x7]; // offset 0xFB9
    CUtlSymbolLarge m_DialogXMLName; // offset 0xFC0, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xFC8, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xFD0, size 0x8, align 8
    char _pad_0FD8[0x8]; // offset 0xFD8
};
