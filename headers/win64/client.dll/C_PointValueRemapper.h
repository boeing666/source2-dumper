#pragma once

class C_PointValueRemapper : public C_BaseEntity /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bDisabled; // offset 0x5F0, size 0x1, align 1
    bool m_bDisabledOld; // offset 0x5F1, size 0x1, align 1
    bool m_bUpdateOnClient; // offset 0x5F2, size 0x1, align 1
    char _pad_05F3[0x1]; // offset 0x5F3
    ValueRemapperInputType_t m_nInputType; // offset 0x5F4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineStart; // offset 0x5F8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineEnd; // offset 0x5FC, size 0x4, align 4
    float32 m_flMaximumChangePerSecond; // offset 0x600, size 0x4, align 4
    float32 m_flDisengageDistance; // offset 0x604, size 0x4, align 4
    float32 m_flEngageDistance; // offset 0x608, size 0x4, align 4
    bool m_bRequiresUseKey; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    ValueRemapperOutputType_t m_nOutputType; // offset 0x610, size 0x4, align 4
    char _pad_0614[0x4]; // offset 0x614
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // offset 0x618, size 0x18, align 8 | MNotSaved
    ValueRemapperHapticsType_t m_nHapticsType; // offset 0x630, size 0x4, align 4
    ValueRemapperMomentumType_t m_nMomentumType; // offset 0x634, size 0x4, align 4
    float32 m_flMomentumModifier; // offset 0x638, size 0x4, align 4
    float32 m_flSnapValue; // offset 0x63C, size 0x4, align 4
    float32 m_flCurrentMomentum; // offset 0x640, size 0x4, align 4
    ValueRemapperRatchetType_t m_nRatchetType; // offset 0x644, size 0x4, align 4
    float32 m_flRatchetOffset; // offset 0x648, size 0x4, align 4
    float32 m_flInputOffset; // offset 0x64C, size 0x4, align 4
    bool m_bEngaged; // offset 0x650, size 0x1, align 1
    bool m_bFirstUpdate; // offset 0x651, size 0x1, align 1
    char _pad_0652[0x2]; // offset 0x652
    float32 m_flPreviousValue; // offset 0x654, size 0x4, align 4
    GameTime_t m_flPreviousUpdateTickTime; // offset 0x658, size 0x4, align 255
    VectorWS m_vecPreviousTestPoint; // offset 0x65C, size 0xC, align 4
};
