#pragma once

class NextBotCombatCharacter : public CBaseCombatCharacter /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    uint8 m_nLod; // offset 0xBC8, size 0x1, align 1
    bool m_didModelChange; // offset 0xBC9, size 0x1, align 1
    char _pad_0BCA[0x6]; // offset 0xBCA
};
