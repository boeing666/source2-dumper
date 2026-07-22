#pragma once

class CDOTATurboHeroPickRules : public CDOTABaseCustomHeroPickRules /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    DOTACustomHeroPickRulesPhase_t m_Phase; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
};
