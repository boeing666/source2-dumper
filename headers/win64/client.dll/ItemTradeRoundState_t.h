#pragma once

struct ItemTradeRoundState_t  // sizeof 0x78, align 0xFF [vtable] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< ItemTradeOption_t > m_vecOptions; // offset 0x8, size 0x68, align 8
    ItemTradeRoundID_t m_nID; // offset 0x70, size 0x4, align 255
    int32 m_nRerolls; // offset 0x74, size 0x4, align 4
};
