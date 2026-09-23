#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x1050, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x1028]; // offset 0x0
    bool m_bEnabled; // offset 0x1028, size 0x1, align 1
    char _pad_1029[0x7]; // offset 0x1029
    CUtlSymbolLarge m_DialogXMLName; // offset 0x1030, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0x1038, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0x1040, size 0x8, align 8
    char _pad_1048[0x8]; // offset 0x1048
};
