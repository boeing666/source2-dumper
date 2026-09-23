#pragma once

class C_BaseClientUIEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x10C8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    bool m_bEnabled; // offset 0x10A0, size 0x1, align 1
    char _pad_10A1[0x7]; // offset 0x10A1
    CUtlSymbolLarge m_DialogXMLName; // offset 0x10A8, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0x10B0, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0x10B8, size 0x8, align 8
    char _pad_10C0[0x8]; // offset 0x10C0
};
