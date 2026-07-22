#pragma once

class CDOTACustomGameHeroPickRules : public CDOTABaseCustomHeroPickRules /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    DOTACustomHeroPickRulesPhase_t m_Phase; // offset 0x498, size 0x4, align 4
    int32 m_nNumBansPerTeam; // offset 0x49C, size 0x4, align 4
    GameTime_t m_flEnterTime; // offset 0x4A0, size 0x4, align 255
    int32 m_nNumHeroesPicked; // offset 0x4A4, size 0x4, align 4
};
