#pragma once

class CDotaSubquestEntityDeath : public CDotaSubquestBase /*0x0*/  // sizeof 0x9E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    CUtlVector< CUtlSymbolLarge > m_entityNameList; // offset 0x9D0, size 0x18, align 8
};
