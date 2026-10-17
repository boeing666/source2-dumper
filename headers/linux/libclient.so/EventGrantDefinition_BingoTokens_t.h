#pragma once

struct EventGrantDefinition_BingoTokens_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    LeagueID_t m_unLeagueID; // offset 0x8, size 0x4, align 255
    uint32 m_unLeaguePhase; // offset 0xC, size 0x4, align 4
    uint32 m_unTokenQuantity; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
