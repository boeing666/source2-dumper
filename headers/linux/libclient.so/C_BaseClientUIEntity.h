#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xD98, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xD70]; // offset 0x0
    bool m_bEnabled; // offset 0xD70, size 0x1, align 1
    char _pad_0D71[0x7]; // offset 0xD71
    CUtlSymbolLarge m_DialogXMLName; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xD80, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xD88, size 0x8, align 8
    char _pad_0D90[0x8]; // offset 0xD90
};
