#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xCF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    bool m_bEnabled; // offset 0xB9C, size 0x1, align 1
    char _pad_0B9D[0x3]; // offset 0xB9D
    CUtlSymbolLarge m_DialogXMLName; // offset 0xBA0, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xBA8, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xBB0, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0xBB8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0xBD8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0xBF8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0xC18, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0xC38, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0xC58, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0xC78, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0xC98, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0xCB8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0xCD8, size 0x20, align 8
};
