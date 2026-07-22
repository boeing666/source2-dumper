#pragma once

class CDOTAAppCheers : public CBaseEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x80E]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x80E, size 0x2, align 2
    int16 m_nRadiantBronzeCheers; // offset 0x810, size 0x2, align 2
    int16 m_nRadiantSilverCheers; // offset 0x812, size 0x2, align 2
    int16 m_nRadiantGoldCheers; // offset 0x814, size 0x2, align 2
    char _pad_0816[0x2]; // offset 0x816
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x818, size 0x4, align 4
    int16 m_nDireCheers; // offset 0x81C, size 0x2, align 2
    int16 m_nDireBronzeCheers; // offset 0x81E, size 0x2, align 2
    int16 m_nDireSilverCheers; // offset 0x820, size 0x2, align 2
    int16 m_nDireGoldCheers; // offset 0x822, size 0x2, align 2
    ECrowdLevel m_nDireCrowdLevel; // offset 0x824, size 0x4, align 4
};
