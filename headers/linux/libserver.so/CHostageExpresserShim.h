#pragma once

class CHostageExpresserShim : public CBaseCombatCharacter /*0x0*/  // sizeof 0xE00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDF0]; // offset 0x0
    CAI_Expresser* m_pExpresser; // offset 0xDF0, size 0x8, align 8
    char _pad_0DF8[0x8]; // offset 0xDF8
};
