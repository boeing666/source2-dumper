#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xF68, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xF40]; // offset 0x0
    bool m_bEnabled; // offset 0xF40, size 0x1, align 1
    char _pad_0F41[0x7]; // offset 0xF41
    CUtlSymbolLarge m_DialogXMLName; // offset 0xF48, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xF50, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xF58, size 0x8, align 8
    char _pad_0F60[0x8]; // offset 0xF60
};
