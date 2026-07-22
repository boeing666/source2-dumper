#pragma once

class CSoundEventPathCornerEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x590, size 0x8, align 8
    char _pad_0598[0x18]; // offset 0x598
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x5B0, size 0x60, align 8 | MNotSaved
};
