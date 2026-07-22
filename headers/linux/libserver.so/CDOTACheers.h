#pragma once

class CDOTACheers : public CBaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x778, size 0x2, align 2
    int16 m_nDireCheers; // offset 0x77A, size 0x2, align 2
    int16 m_nRadiantPremiumCheers; // offset 0x77C, size 0x2, align 2
    int16 m_nDirePremiumCheers; // offset 0x77E, size 0x2, align 2
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x780, size 0x4, align 4
    ECrowdLevel m_nDireCrowdLevel; // offset 0x784, size 0x4, align 4
};
