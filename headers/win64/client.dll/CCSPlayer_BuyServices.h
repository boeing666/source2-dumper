#pragma once

class CCSPlayer_BuyServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0xB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // offset 0x48, size 0x68, align 8
};
