#pragma once

class CHeroesPerPlayer  // sizeof 0x48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CNetworkUtlVectorBase< HeroID_t > m_vecHeroIDs; // offset 0x30, size 0x18, align 8
};
