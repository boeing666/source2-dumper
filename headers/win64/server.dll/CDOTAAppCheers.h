#pragma once

class CDOTAAppCheers : public CBaseEntity /*0x0*/  // sizeof 0x548, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x52E]; // offset 0x0
    int16 m_nRadiantCheers; // offset 0x52E, size 0x2, align 2
    int16 m_nRadiantBronzeCheers; // offset 0x530, size 0x2, align 2
    int16 m_nRadiantSilverCheers; // offset 0x532, size 0x2, align 2
    int16 m_nRadiantGoldCheers; // offset 0x534, size 0x2, align 2
    char _pad_0536[0x2]; // offset 0x536
    ECrowdLevel m_nRadiantCrowdLevel; // offset 0x538, size 0x4, align 4
    int16 m_nDireCheers; // offset 0x53C, size 0x2, align 2
    int16 m_nDireBronzeCheers; // offset 0x53E, size 0x2, align 2
    int16 m_nDireSilverCheers; // offset 0x540, size 0x2, align 2
    int16 m_nDireGoldCheers; // offset 0x542, size 0x2, align 2
    ECrowdLevel m_nDireCrowdLevel; // offset 0x544, size 0x4, align 4
};
