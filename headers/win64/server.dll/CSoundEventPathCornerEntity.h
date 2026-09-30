#pragma once

class CSoundEventPathCornerEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x5A8]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x5A8, size 0x8, align 8
    char _pad_05B0[0x18]; // offset 0x5B0
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x5C8, size 0x60, align 8 | MNotSaved
};
