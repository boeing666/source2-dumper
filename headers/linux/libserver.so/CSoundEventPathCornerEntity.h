#pragma once

class CSoundEventPathCornerEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x878, size 0x8, align 8
    char _pad_0880[0x18]; // offset 0x880
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x898, size 0x60, align 8 | MNotSaved
};
