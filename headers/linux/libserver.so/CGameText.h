#pragma once

class CGameText : public CRulePointEntity /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0xA60, size 0x8, align 8
    hudtextparms_t m_textParms; // offset 0xA68, size 0x14, align 4
    char _pad_0A7C[0x4]; // offset 0xA7C
};
