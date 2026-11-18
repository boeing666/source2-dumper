#pragma once

class NextBotCombatCharacter : public CBaseCombatCharacter /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    uint8 m_nLod; // offset 0xD10, size 0x1, align 1
    bool m_didModelChange; // offset 0xD11, size 0x1, align 1
    char _pad_0D12[0x6]; // offset 0xD12
};
