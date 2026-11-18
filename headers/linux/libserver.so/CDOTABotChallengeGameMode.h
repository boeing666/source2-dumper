#pragma once

class CDOTABotChallengeGameMode : public CDOTABaseGameMode /*0x0*/  // sizeof 0xB08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    bool m_bRuleMidLaneOnly; // offset 0xAC8, size 0x1, align 1
    bool m_bRuleEliteBotHeroes; // offset 0xAC9, size 0x1, align 1
    bool m_bRuleMeteorStaff; // offset 0xACA, size 0x1, align 1
    bool m_bHasStartedEndgame; // offset 0xACB, size 0x1, align 1
    CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC; // offset 0xACC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDireAncientNPC; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x2C]; // offset 0xAD4
    bool m_bRuleAncientsDuel; // offset 0xB00, size 0x1, align 1
    char _pad_0B01[0x3]; // offset 0xB01
    float32 m_flEndgameTime; // offset 0xB04, size 0x4, align 4
};
