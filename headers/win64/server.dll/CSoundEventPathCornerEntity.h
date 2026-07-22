#pragma once

class CSoundEventPathCornerEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x560]; // offset 0x0
    CUtlSymbolLarge m_iszPathCorner; // offset 0x560, size 0x8, align 8
    int32 m_iCountMax; // offset 0x568, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x56C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x570, size 0x4, align 4
    float32 m_flDotProductMax; // offset 0x574, size 0x4, align 4
    bool m_bPlaying; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x27]; // offset 0x579
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x5A0, size 0x60, align 8 | MNetworkEnable MNotSaved
};
