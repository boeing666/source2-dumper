#pragma once

class CSoundEventPathCornerEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x868, size 0x8, align 8
    char _pad_0870[0x18]; // offset 0x870
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x888, size 0x60, align 8 | MNotSaved
};
