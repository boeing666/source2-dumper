#pragma once

class NextBotCombatCharacter : public CBaseCombatCharacter /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    uint8 m_nLod; // offset 0xCA8, size 0x1, align 1
    bool m_didModelChange; // offset 0xCA9, size 0x1, align 1
    char _pad_0CAA[0x6]; // offset 0xCAA
};
