#pragma once

struct ResponseContext_t  // sizeof 0x18, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CUtlSymbolLarge m_iszName; // offset 0x0, size 0x8, align 8
    CUtlSymbolLarge m_iszValue; // offset 0x8, size 0x8, align 8
    GameTime_t m_fExpirationTime; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
};
