#pragma once

class CGameText : public CRulePointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0x780, size 0x8, align 8
    hudtextparms_t m_textParms; // offset 0x788, size 0x14, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
