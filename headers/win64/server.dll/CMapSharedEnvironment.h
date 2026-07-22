#pragma once

class CMapSharedEnvironment : public CLogicalEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_targetMapName; // offset 0x4A0, size 0x8, align 8
    char _pad_04A8[0x8]; // offset 0x4A8
};
