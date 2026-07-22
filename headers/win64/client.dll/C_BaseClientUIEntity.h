#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xAB8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    bool m_bEnabled; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x7]; // offset 0xA91
    CUtlSymbolLarge m_DialogXMLName; // offset 0xA98, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xAA0, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xAA8, size 0x8, align 8
    char _pad_0AB0[0x8]; // offset 0xAB0
};
