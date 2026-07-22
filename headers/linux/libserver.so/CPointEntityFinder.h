#pragma once

class CPointEntityFinder : public CBaseEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CBaseEntity > m_hEntity; // offset 0x788, size 0x4, align 4 | MNotSaved
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_iFilterName; // offset 0x790, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CUtlSymbolLarge m_iRefName; // offset 0x7A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hReference; // offset 0x7A8, size 0x4, align 4
    EntFinderMethod_t m_FindMethod; // offset 0x7AC, size 0x4, align 4
    CEntityIOOutput m_OnFoundEntity; // offset 0x7B0, size 0x18, align 255
};
