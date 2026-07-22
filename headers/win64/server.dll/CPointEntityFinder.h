#pragma once

class CPointEntityFinder : public CBaseEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CBaseEntity > m_hEntity; // offset 0x4A8, size 0x4, align 4 | MNotSaved
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_iFilterName; // offset 0x4B0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_iRefName; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseEntity > m_hReference; // offset 0x4C8, size 0x4, align 4
    EntFinderMethod_t m_FindMethod; // offset 0x4CC, size 0x4, align 4
    CEntityIOOutput m_OnFoundEntity; // offset 0x4D0, size 0x18, align 255
};
