#pragma once

class C_DOTACheers : public C_BaseEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x76C, size 0x2, align 2
    int16 m_nDireCheers; // offset 0x76E, size 0x2, align 2
    int16 m_nRadiantPremiumCheers; // offset 0x770, size 0x2, align 2
    int16 m_nDirePremiumCheers; // offset 0x772, size 0x2, align 2
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x774, size 0x4, align 4
    ECrowdLevel m_nDireCrowdLevel; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
};
