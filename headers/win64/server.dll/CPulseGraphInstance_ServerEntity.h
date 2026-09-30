#pragma once

class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x120]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x120, size 0x4, align 4
    bool m_bActivated; // offset 0x124, size 0x1, align 1
    char _pad_0125[0x3]; // offset 0x125
    CUtlSymbolLarge m_sNameFixupStaticPrefix; // offset 0x128, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupParent; // offset 0x130, size 0x8, align 8
    CUtlSymbolLarge m_sNameFixupLocal; // offset 0x138, size 0x8, align 8
    CUtlSymbolLarge m_sProceduralWorldNameForRelays; // offset 0x140, size 0x8, align 8
};
