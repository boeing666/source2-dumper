#pragma once

class CDOTABotChallengeGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    bool m_bRuleMidLaneOnly; // offset 0x7D8, size 0x1, align 1
    bool m_bRuleEliteBotHeroes; // offset 0x7D9, size 0x1, align 1
    bool m_bRuleMeteorStaff; // offset 0x7DA, size 0x1, align 1
    bool m_bHasStartedEndgame; // offset 0x7DB, size 0x1, align 1
    CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC; // offset 0x7DC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDireAncientNPC; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x2C]; // offset 0x7E4
    bool m_bRuleAncientsDuel; // offset 0x810, size 0x1, align 1
    char _pad_0811[0x3]; // offset 0x811
    float32 m_flEndgameTime; // offset 0x814, size 0x4, align 4
};
