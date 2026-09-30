#pragma once

class CTemplateNPCMaker : public CBaseNPCMaker /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    CUtlSymbolLarge m_iszWorldName; // offset 0x590, size 0x8, align 8
    CUtlSymbolLarge m_iszSource2EntityLumpName; // offset 0x598, size 0x8, align 8
};
