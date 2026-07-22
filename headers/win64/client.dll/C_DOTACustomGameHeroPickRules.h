#pragma once

class C_DOTACustomGameHeroPickRules : public C_DOTABaseCustomHeroPickRules /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    DOTACustomHeroPickRulesPhase_t m_Phase; // offset 0x5F0, size 0x4, align 4
    int32 m_nNumBansPerTeam; // offset 0x5F4, size 0x4, align 4
    GameTime_t m_flEnterTime; // offset 0x5F8, size 0x4, align 255
    int32 m_nNumHeroesPicked; // offset 0x5FC, size 0x4, align 4
};
