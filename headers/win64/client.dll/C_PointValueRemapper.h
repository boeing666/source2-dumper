#pragma once

class C_PointValueRemapper : public C_BaseEntity /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bDisabled; // offset 0x600, size 0x1, align 1
    bool m_bDisabledOld; // offset 0x601, size 0x1, align 1
    bool m_bUpdateOnClient; // offset 0x602, size 0x1, align 1
    char _pad_0603[0x1]; // offset 0x603
    ValueRemapperInputType_t m_nInputType; // offset 0x604, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineStart; // offset 0x608, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineEnd; // offset 0x60C, size 0x4, align 4
    float32 m_flMaximumChangePerSecond; // offset 0x610, size 0x4, align 4
    float32 m_flDisengageDistance; // offset 0x614, size 0x4, align 4
    float32 m_flEngageDistance; // offset 0x618, size 0x4, align 4
    bool m_bRequiresUseKey; // offset 0x61C, size 0x1, align 1
    char _pad_061D[0x3]; // offset 0x61D
    ValueRemapperOutputType_t m_nOutputType; // offset 0x620, size 0x4, align 4
    char _pad_0624[0x4]; // offset 0x624
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // offset 0x628, size 0x18, align 8 | MNotSaved
    ValueRemapperHapticsType_t m_nHapticsType; // offset 0x640, size 0x4, align 4
    ValueRemapperMomentumType_t m_nMomentumType; // offset 0x644, size 0x4, align 4
    float32 m_flMomentumModifier; // offset 0x648, size 0x4, align 4
    float32 m_flSnapValue; // offset 0x64C, size 0x4, align 4
    float32 m_flCurrentMomentum; // offset 0x650, size 0x4, align 4
    ValueRemapperRatchetType_t m_nRatchetType; // offset 0x654, size 0x4, align 4
    float32 m_flRatchetOffset; // offset 0x658, size 0x4, align 4
    float32 m_flInputOffset; // offset 0x65C, size 0x4, align 4
    bool m_bEngaged; // offset 0x660, size 0x1, align 1
    bool m_bFirstUpdate; // offset 0x661, size 0x1, align 1
    char _pad_0662[0x2]; // offset 0x662
    float32 m_flPreviousValue; // offset 0x664, size 0x4, align 4
    GameTime_t m_flPreviousUpdateTickTime; // offset 0x668, size 0x4, align 255
    VectorWS m_vecPreviousTestPoint; // offset 0x66C, size 0xC, align 4
};
