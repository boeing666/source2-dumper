#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    bool m_bEnabled; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x7]; // offset 0x771
    CUtlSymbolLarge m_DialogXMLName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0x788, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0x790, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0x7B0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0x7D0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0x7F0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0x810, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0x830, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0x850, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0x870, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0x890, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0x8B0, size 0x20, align 8
};
