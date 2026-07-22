#pragma once

class CMapSharedEnvironment : public CLogicalEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_targetMapName; // offset 0x778, size 0x8, align 8
    char _pad_0780[0x8]; // offset 0x780
};
