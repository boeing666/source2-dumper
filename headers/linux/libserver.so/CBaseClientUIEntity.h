#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xC88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    bool m_bEnabled; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    CUtlSymbolLarge m_DialogXMLName; // offset 0xB30, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xB38, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xB40, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0xB48, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0xB68, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0xB88, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0xBA8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0xBC8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0xBE8, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0xC08, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0xC28, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0xC48, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0xC68, size 0x20, align 8
};
