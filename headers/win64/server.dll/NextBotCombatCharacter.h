#pragma once

class NextBotCombatCharacter : public CBaseCombatCharacter /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    uint8 m_nLod; // offset 0xA30, size 0x1, align 1
    bool m_didModelChange; // offset 0xA31, size 0x1, align 1
    char _pad_0A32[0x6]; // offset 0xA32
};
