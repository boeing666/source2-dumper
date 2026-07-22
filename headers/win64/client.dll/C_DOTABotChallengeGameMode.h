#pragma once

class C_DOTABotChallengeGameMode : public C_DOTABaseGameMode /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    bool m_bRuleAncientsDuel; // offset 0x7D8, size 0x1, align 1
    char _pad_07D9[0x3]; // offset 0x7D9
    float32 m_flEndgameTime; // offset 0x7DC, size 0x4, align 4
};
