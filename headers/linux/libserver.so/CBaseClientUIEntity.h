#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    bool m_bEnabled; // offset 0xA54, size 0x1, align 1
    char _pad_0A55[0x3]; // offset 0xA55
    CUtlSymbolLarge m_DialogXMLName; // offset 0xA58, size 0x8, align 8
    CUtlSymbolLarge m_PanelClassName; // offset 0xA60, size 0x8, align 8
    CUtlSymbolLarge m_PanelID; // offset 0xA68, size 0x8, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0xA70, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0xA90, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0xAB0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0xAD0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0xAF0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0xB10, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0xB30, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0xB50, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0xB70, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0xB90, size 0x20, align 8
};
