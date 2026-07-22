#pragma once

class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance /*0x0*/  // sizeof 0x1B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x190]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x190, size 0x4, align 4
    bool m_bActivated; // offset 0x194, size 0x1, align 1
    char _pad_0195[0x3]; // offset 0x195
    CUtlSymbolLarge m_sNameFixupStaticPrefix; // offset 0x198, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupParent; // offset 0x1A0, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupLocal; // offset 0x1A8, size 0x8, align 8
    CUtlSymbolLarge m_sProceduralWorldNameForRelays; // offset 0x1B0, size 0x8, align 8
};
