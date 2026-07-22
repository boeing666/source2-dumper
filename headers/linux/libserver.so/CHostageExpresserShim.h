#pragma once

class CHostageExpresserShim : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CAI_Expresser* m_pExpresser; // offset 0xD10, size 0x8, align 8
    char _pad_0D18[0x8]; // offset 0xD18
};
