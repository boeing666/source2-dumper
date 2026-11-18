#pragma once

class CDOTABotChallengeGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    bool m_bRuleMidLaneOnly; // offset 0x7E8, size 0x1, align 1
    bool m_bRuleEliteBotHeroes; // offset 0x7E9, size 0x1, align 1
    bool m_bRuleMeteorStaff; // offset 0x7EA, size 0x1, align 1
    bool m_bHasStartedEndgame; // offset 0x7EB, size 0x1, align 1
    CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC; // offset 0x7EC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDireAncientNPC; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x2C]; // offset 0x7F4
    bool m_bRuleAncientsDuel; // offset 0x820, size 0x1, align 1
    char _pad_0821[0x3]; // offset 0x821
    float32 m_flEndgameTime; // offset 0x824, size 0x4, align 4
};
