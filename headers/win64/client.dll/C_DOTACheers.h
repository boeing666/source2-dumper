#pragma once

class C_DOTACheers : public C_BaseEntity /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x5F0, size 0x2, align 2
    int16 m_nDireCheers; // offset 0x5F2, size 0x2, align 2
    int16 m_nRadiantPremiumCheers; // offset 0x5F4, size 0x2, align 2
    int16 m_nDirePremiumCheers; // offset 0x5F6, size 0x2, align 2
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x5F8, size 0x4, align 4
    ECrowdLevel m_nDireCrowdLevel; // offset 0x5FC, size 0x4, align 4
};
