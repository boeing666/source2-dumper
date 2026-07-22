#pragma once

class CSoundEventPathCornerEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x848]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x848, size 0x8, align 8
    int32 m_iCountMax; // offset 0x850, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x854, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x858, size 0x4, align 4
    float32 m_flDotProductMax; // offset 0x85C, size 0x4, align 4
    bool m_bPlaying; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x27]; // offset 0x861
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x888, size 0x60, align 8 | MNotSaved
};
