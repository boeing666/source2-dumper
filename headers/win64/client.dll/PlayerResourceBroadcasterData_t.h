#pragma once

struct PlayerResourceBroadcasterData_t  // sizeof 0x48, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlSymbolLarge m_iszBroadcasterChannelDescription; // offset 0x30, size 0x8, align 8
    CUtlSymbolLarge m_iszBroadcasterChannelCountryCode; // offset 0x38, size 0x8, align 8
    CUtlSymbolLarge m_iszBroadcasterChannelLanguageCode; // offset 0x40, size 0x8, align 8
};
