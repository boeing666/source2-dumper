#pragma once

class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance /*0x0*/  // sizeof 0x1C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A0]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x1A0, size 0x4, align 4
    bool m_bActivated; // offset 0x1A4, size 0x1, align 1
    char _pad_01A5[0x3]; // offset 0x1A5
    CUtlSymbolLarge m_sNameFixupStaticPrefix; // offset 0x1A8, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupParent; // offset 0x1B0, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupLocal; // offset 0x1B8, size 0x8, align 8
    CUtlSymbolLarge m_sProceduralWorldNameForRelays; // offset 0x1C0, size 0x8, align 8
};
