#pragma once

class CHostageExpresserShim : public CBaseCombatCharacter /*0x0*/  // sizeof 0xA40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CAI_Expresser* m_pExpresser; // offset 0xA30, size 0x8, align 8
    char _pad_0A38[0x8]; // offset 0xA38
};
