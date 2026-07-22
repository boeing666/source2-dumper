#pragma once

class CGameText : public CRulePointEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0x790, size 0x8, align 8
    hudtextparms_t m_textParms; // offset 0x798, size 0x14, align 255
    char _pad_07AC[0x4]; // offset 0x7AC
};
