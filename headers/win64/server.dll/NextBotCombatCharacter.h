#pragma once

class NextBotCombatCharacter : public CBaseCombatCharacter /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    uint8 m_nLod; // offset 0x8F0, size 0x1, align 1
    bool m_didModelChange; // offset 0x8F1, size 0x1, align 1
    char _pad_08F2[0x6]; // offset 0x8F2
};
