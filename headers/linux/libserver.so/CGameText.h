#pragma once

class CGameText : public CRulePointEntity /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0xB40, size 0x8, align 8
    hudtextparms_t m_textParms; // offset 0xB48, size 0x14, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
};
