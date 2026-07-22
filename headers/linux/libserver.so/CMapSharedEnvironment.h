#pragma once

class CMapSharedEnvironment : public CLogicalEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_targetMapName; // offset 0x788, size 0x8, align 8
    char _pad_0790[0x8]; // offset 0x790
};
