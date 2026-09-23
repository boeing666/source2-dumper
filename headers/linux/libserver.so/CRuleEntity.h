#pragma once

class CRuleEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CUtlSymbolLarge m_iszMaster; // offset 0xB30, size 0x8, align 8
};
