#pragma once

class CPointEntityFinder : public CBaseEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CHandle< CBaseEntity > m_hEntity; // offset 0x498, size 0x4, align 4 | MNotSaved
    char _pad_049C[0x4]; // offset 0x49C
    CUtlSymbolLarge m_iFilterName; // offset 0x4A0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_iRefName; // offset 0x4B0, size 0x8, align 8
    CHandle< CBaseEntity > m_hReference; // offset 0x4B8, size 0x4, align 4
    EntFinderMethod_t m_FindMethod; // offset 0x4BC, size 0x4, align 4
    CEntityIOOutput m_OnFoundEntity; // offset 0x4C0, size 0x18, align 255
};
