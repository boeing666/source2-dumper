#pragma once

struct EventGrantDefinition_OverworldTokens_t::TokenAmount_t  // sizeof 0x4, align 0x2 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    OverworldTokenID_t m_unTokenID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x1]; // offset 0x1
    uint16 m_unQuantity; // offset 0x2, size 0x2, align 2
};
