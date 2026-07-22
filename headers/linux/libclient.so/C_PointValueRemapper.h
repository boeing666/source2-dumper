#pragma once

class C_PointValueRemapper : public C_BaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bDisabled; // offset 0x76C, size 0x1, align 1
    bool m_bDisabledOld; // offset 0x76D, size 0x1, align 1
    bool m_bUpdateOnClient; // offset 0x76E, size 0x1, align 1
    char _pad_076F[0x1]; // offset 0x76F
    ValueRemapperInputType_t m_nInputType; // offset 0x770, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineStart; // offset 0x774, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemapLineEnd; // offset 0x778, size 0x4, align 4
    float32 m_flMaximumChangePerSecond; // offset 0x77C, size 0x4, align 4
    float32 m_flDisengageDistance; // offset 0x780, size 0x4, align 4
    float32 m_flEngageDistance; // offset 0x784, size 0x4, align 4
    bool m_bRequiresUseKey; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    ValueRemapperOutputType_t m_nOutputType; // offset 0x78C, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // offset 0x790, size 0x18, align 8 | MNotSaved
    ValueRemapperHapticsType_t m_nHapticsType; // offset 0x7A8, size 0x4, align 4
    ValueRemapperMomentumType_t m_nMomentumType; // offset 0x7AC, size 0x4, align 4
    float32 m_flMomentumModifier; // offset 0x7B0, size 0x4, align 4
    float32 m_flSnapValue; // offset 0x7B4, size 0x4, align 4
    float32 m_flCurrentMomentum; // offset 0x7B8, size 0x4, align 4
    ValueRemapperRatchetType_t m_nRatchetType; // offset 0x7BC, size 0x4, align 4
    float32 m_flRatchetOffset; // offset 0x7C0, size 0x4, align 4
    float32 m_flInputOffset; // offset 0x7C4, size 0x4, align 4
    bool m_bEngaged; // offset 0x7C8, size 0x1, align 1
    bool m_bFirstUpdate; // offset 0x7C9, size 0x1, align 1
    char _pad_07CA[0x2]; // offset 0x7CA
    float32 m_flPreviousValue; // offset 0x7CC, size 0x4, align 4
    GameTime_t m_flPreviousUpdateTickTime; // offset 0x7D0, size 0x4, align 255
    VectorWS m_vecPreviousTestPoint; // offset 0x7D4, size 0xC, align 4
};
