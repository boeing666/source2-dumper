#pragma once

class C_DotaQuest : public C_BaseEntity /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    char[256] m_pszQuestTitle; // offset 0x5F0, size 0x100, align 1
    char[256] m_pszQuestText; // offset 0x6F0, size 0x100, align 1
    int32 m_nQuestType; // offset 0x7F0, size 0x4, align 4
    CHandle< C_DotaSubquestBase >[8] m_hSubquests; // offset 0x7F4, size 0x20, align 4
    bool m_bHidden; // offset 0x814, size 0x1, align 1
    bool m_bCompleted; // offset 0x815, size 0x1, align 1
    bool m_bWinIfCompleted; // offset 0x816, size 0x1, align 1
    bool m_bLoseIfCompleted; // offset 0x817, size 0x1, align 1
    char[256] m_pszGameEndText; // offset 0x818, size 0x100, align 1
    int32[4] m_pnTextReplaceValuesCDotaQuest; // offset 0x918, size 0x10, align 4
    char[64] m_pszTextReplaceString; // offset 0x928, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x968, size 0x4, align 4
    bool m_bWasCompleted; // offset 0x96C, size 0x1, align 1
    char _pad_096D[0x3]; // offset 0x96D
};
