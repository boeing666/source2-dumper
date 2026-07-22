#pragma once

class C_DotaQuest : public C_BaseEntity /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    char[256] m_pszQuestTitle; // offset 0x76C, size 0x100, align 1
    char[256] m_pszQuestText; // offset 0x86C, size 0x100, align 1
    int32 m_nQuestType; // offset 0x96C, size 0x4, align 4
    CHandle< C_DotaSubquestBase >[8] m_hSubquests; // offset 0x970, size 0x20, align 4
    bool m_bHidden; // offset 0x990, size 0x1, align 1
    bool m_bCompleted; // offset 0x991, size 0x1, align 1
    bool m_bWinIfCompleted; // offset 0x992, size 0x1, align 1
    bool m_bLoseIfCompleted; // offset 0x993, size 0x1, align 1
    char[256] m_pszGameEndText; // offset 0x994, size 0x100, align 1
    int32[4] m_pnTextReplaceValuesCDotaQuest; // offset 0xA94, size 0x10, align 4
    char[64] m_pszTextReplaceString; // offset 0xAA4, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0xAE4, size 0x4, align 4
    bool m_bWasCompleted; // offset 0xAE8, size 0x1, align 1
    char _pad_0AE9[0x7]; // offset 0xAE9
};
