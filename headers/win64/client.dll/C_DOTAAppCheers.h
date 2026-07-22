#pragma once

class C_DOTAAppCheers : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x5F0, size 0x2, align 2
    int16 m_nRadiantBronzeCheers; // offset 0x5F2, size 0x2, align 2
    int16 m_nRadiantSilverCheers; // offset 0x5F4, size 0x2, align 2
    int16 m_nRadiantGoldCheers; // offset 0x5F6, size 0x2, align 2
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x5F8, size 0x4, align 4
    int16 m_nDireCheers; // offset 0x5FC, size 0x2, align 2
    int16 m_nDireBronzeCheers; // offset 0x5FE, size 0x2, align 2
    int16 m_nDireSilverCheers; // offset 0x600, size 0x2, align 2
    int16 m_nDireGoldCheers; // offset 0x602, size 0x2, align 2
    ECrowdLevel m_nDireCrowdLevel; // offset 0x604, size 0x4, align 4
};
