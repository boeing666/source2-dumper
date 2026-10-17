#pragma once

class C_DOTABotChallengeGameMode : public C_DOTABaseGameMode /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x95C]; // offset 0x0
    bool m_bRuleAncientsDuel; // offset 0x95C, size 0x1, align 1
    char _pad_095D[0x3]; // offset 0x95D
    float32 m_flEndgameTime; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x4]; // offset 0x964
};
