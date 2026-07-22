#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xBA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    bool m_bEnabled; // offset 0xA4C, size 0x1, align 1
    char _pad_0A4D[0x3]; // offset 0xA4D
    CUtlSymbolLarge m_DialogXMLName; // offset 0xA50, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xA58, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xA60, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0xA68, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0xA88, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0xAA8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0xAC8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0xAE8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0xB08, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0xB28, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0xB48, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0xB68, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0xB88, size 0x20, align 8
};
