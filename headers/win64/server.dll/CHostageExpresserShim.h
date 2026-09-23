#pragma once

class CHostageExpresserShim : public CBaseCombatCharacter /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB10]; // offset 0x0
    CAI_Expresser* m_pExpresser; // offset 0xB10, size 0x8, align 8
    char _pad_0B18[0x8]; // offset 0xB18
};
