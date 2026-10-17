#pragma once

class CDOTABotChallengeGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    bool m_bRuleMidLaneOnly; // offset 0xAC0, size 0x1, align 1
    bool m_bRuleEliteBotHeroes; // offset 0xAC1, size 0x1, align 1
    bool m_bRuleMeteorStaff; // offset 0xAC2, size 0x1, align 1
    bool m_bHasStartedEndgame; // offset 0xAC3, size 0x1, align 1
    CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC; // offset 0xAC4, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDireAncientNPC; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x2C]; // offset 0xACC
    bool m_bRuleAncientsDuel; // offset 0xAF8, size 0x1, align 1
    char _pad_0AF9[0x3]; // offset 0xAF9
    float32 m_flEndgameTime; // offset 0xAFC, size 0x4, align 4
};
