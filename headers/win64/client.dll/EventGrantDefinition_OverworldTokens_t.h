#pragma once

struct EventGrantDefinition_OverworldTokens_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    OverworldID_t m_unOverworldID; // offset 0x8, size 0x1, align 255
    char _pad_0009[0x1]; // offset 0x9
    EventGrantDefinition_OverworldTokens_t::TokenAmount_t[6] m_aTokens; // offset 0xA, size 0x18, align 2
    bool m_bSuppressPopup; // offset 0x22, size 0x1, align 1
    char _pad_0023[0x5]; // offset 0x23
};
