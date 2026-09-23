#pragma once

class CSoundEventMultiPointEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x878, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x844]; // offset 0x0
    int32 m_iCountMax; // offset 0x844, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x848, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x84C, size 0x4, align 4
    float32 m_flDotProductMax; // offset 0x850, size 0x4, align 4
    bool m_bPlaying; // offset 0x854, size 0x1, align 1
    char _pad_0855[0x23]; // offset 0x855
};
