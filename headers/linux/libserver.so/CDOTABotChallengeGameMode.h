#pragma once

class CDOTABotChallengeGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAB8]; // offset 0x0
    bool m_bRuleMidLaneOnly; // offset 0xAB8, size 0x1, align 1
    bool m_bRuleEliteBotHeroes; // offset 0xAB9, size 0x1, align 1
    bool m_bRuleMeteorStaff; // offset 0xABA, size 0x1, align 1
    bool m_bHasStartedEndgame; // offset 0xABB, size 0x1, align 1
    CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC; // offset 0xABC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDireAncientNPC; // offset 0xAC0, size 0x4, align 4
    char _pad_0AC4[0x2C]; // offset 0xAC4
    bool m_bRuleAncientsDuel; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x3]; // offset 0xAF1
    float32 m_flEndgameTime; // offset 0xAF4, size 0x4, align 4
};
