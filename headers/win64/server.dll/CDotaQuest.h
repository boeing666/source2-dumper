#pragma once

class CDotaQuest : public CBaseEntity /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    char[256] m_pszQuestTitle; // offset 0x498, size 0x100, align 1
    char[256] m_pszQuestText; // offset 0x598, size 0x100, align 1
    int32 m_nQuestType; // offset 0x698, size 0x4, align 4
    CHandle< CDotaSubquestBase >[8] m_hSubquests; // offset 0x69C, size 0x20, align 4
    bool m_bHidden; // offset 0x6BC, size 0x1, align 1
    bool m_bCompleted; // offset 0x6BD, size 0x1, align 1
    bool m_bWinIfCompleted; // offset 0x6BE, size 0x1, align 1
    bool m_bLoseIfCompleted; // offset 0x6BF, size 0x1, align 1
    char[256] m_pszGameEndText; // offset 0x6C0, size 0x100, align 1
    int32[4] m_pnTextReplaceValuesCDotaQuest; // offset 0x7C0, size 0x10, align 4
    char[64] m_pszTextReplaceString; // offset 0x7D0, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x810, size 0x4, align 4
    int32 m_nQuestCompleteFadeAlpha; // offset 0x814, size 0x4, align 4
    char[256] m_pszQuestName; // offset 0x818, size 0x100, align 1
};
