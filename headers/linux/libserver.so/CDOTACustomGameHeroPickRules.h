#pragma once

class CDOTACustomGameHeroPickRules : public CDOTABaseCustomHeroPickRules /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    DOTACustomHeroPickRulesPhase_t m_Phase; // offset 0x778, size 0x4, align 4
    int32 m_nNumBansPerTeam; // offset 0x77C, size 0x4, align 4
    GameTime_t m_flEnterTime; // offset 0x780, size 0x4, align 255
    int32 m_nNumHeroesPicked; // offset 0x784, size 0x4, align 4
};
