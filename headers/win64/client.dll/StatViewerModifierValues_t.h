#pragma once

struct StatViewerModifierValues_t  // sizeof 0x40, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_SourceModifierID; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    EModifierValue m_eValType; // offset 0x34, size 0x4, align 4 | MNetworkEnable
    float32 m_flValue; // offset 0x38, size 0x4, align 4 | MNetworkEnable
    char _pad_003C[0x4]; // offset 0x3C
};
