#pragma once

class C_DOTABotChallengeGameMode : public C_DOTABaseGameMode /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    bool m_bRuleAncientsDuel; // offset 0x7E0, size 0x1, align 1
    char _pad_07E1[0x3]; // offset 0x7E1
    float32 m_flEndgameTime; // offset 0x7E4, size 0x4, align 4
};
