#pragma once

class CCSPlayer_BuyServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // offset 0xD0, size 0x90, align 8
};
