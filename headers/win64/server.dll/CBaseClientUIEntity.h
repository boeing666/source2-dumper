#pragma once

class CBaseClientUIEntity : public CBaseModelEntity /*0x0*/  // sizeof 0x8E0, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bEnabled; // offset 0x780, size 0x1, align 1 | MNetworkEnable
    char _pad_0781[0x7]; // offset 0x781
    CUtlSymbolLarge m_DialogXMLName; // offset 0x788, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_PanelClassName; // offset 0x790, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_PanelID; // offset 0x798, size 0x8, align 8 | MNetworkEnable
    CEntityOutputTemplate< CUtlString > m_CustomOutput0; // offset 0x7A0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput1; // offset 0x7C0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput2; // offset 0x7E0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput3; // offset 0x800, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput4; // offset 0x820, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput5; // offset 0x840, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput6; // offset 0x860, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput7; // offset 0x880, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput8; // offset 0x8A0, size 0x20, align 8
    CEntityOutputTemplate< CUtlString > m_CustomOutput9; // offset 0x8C0, size 0x20, align 8
};
