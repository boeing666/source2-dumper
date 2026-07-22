#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xC40, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    bool m_bEnabled; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x7]; // offset 0xC19
    CUtlSymbolLarge m_DialogXMLName; // offset 0xC20, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xC28, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xC30, size 0x8, align 8
    char _pad_0C38[0x8]; // offset 0xC38
};
