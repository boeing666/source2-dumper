#pragma once

class C_DOTAAppCheers : public C_BaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x76C, size 0x2, align 2
    int16 m_nRadiantBronzeCheers; // offset 0x76E, size 0x2, align 2
    int16 m_nRadiantSilverCheers; // offset 0x770, size 0x2, align 2
    int16 m_nRadiantGoldCheers; // offset 0x772, size 0x2, align 2
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x774, size 0x4, align 4
    int16 m_nDireCheers; // offset 0x778, size 0x2, align 2
    int16 m_nDireBronzeCheers; // offset 0x77A, size 0x2, align 2
    int16 m_nDireSilverCheers; // offset 0x77C, size 0x2, align 2
    int16 m_nDireGoldCheers; // offset 0x77E, size 0x2, align 2
    ECrowdLevel m_nDireCrowdLevel; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
};
