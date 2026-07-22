#pragma once

class CSoundEventMultiPointEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x868, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x834]; // offset 0x0
    int32 m_iCountMax; // offset 0x834, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x838, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x83C, size 0x4, align 4
    float32 m_flDotProductMax; // offset 0x840, size 0x4, align 4
    bool m_bPlaying; // offset 0x844, size 0x1, align 1
    char _pad_0845[0x23]; // offset 0x845
};
