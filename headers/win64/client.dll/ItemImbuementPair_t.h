#pragma once

struct ItemImbuementPair_t  // sizeof 0x50, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_SourceItemID; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    char _pad_0034[0x4]; // offset 0x34
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x38, size 0x18, align 8 | MNetworkEnable
};
