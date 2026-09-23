#pragma once

class CSoundEventMultiPointEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x5A0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    int32 m_iCountMax; // offset 0x568, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x56C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x570, size 0x4, align 4
    float32 m_flDotProductMax; // offset 0x574, size 0x4, align 4
    bool m_bPlaying; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x27]; // offset 0x579
};
