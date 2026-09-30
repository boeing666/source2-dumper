#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0x9D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bEnabled; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
    CUtlSymbolLarge m_DialogXMLName; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0x888, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0x890, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0x898, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0x8B8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0x8D8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0x8F8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0x918, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0x938, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0x958, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0x978, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0x998, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0x9B8, size 0x20, align 8
};
