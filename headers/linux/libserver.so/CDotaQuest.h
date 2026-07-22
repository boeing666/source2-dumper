#pragma once

class CDotaQuest : public CBaseEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    char[256] m_pszQuestTitle; // offset 0x778, size 0x100, align 1
    char[256] m_pszQuestText; // offset 0x878, size 0x100, align 1
    int32 m_nQuestType; // offset 0x978, size 0x4, align 4
    CHandle< CDotaSubquestBase >[8] m_hSubquests; // offset 0x97C, size 0x20, align 4
    bool m_bHidden; // offset 0x99C, size 0x1, align 1
    bool m_bCompleted; // offset 0x99D, size 0x1, align 1
    bool m_bWinIfCompleted; // offset 0x99E, size 0x1, align 1
    bool m_bLoseIfCompleted; // offset 0x99F, size 0x1, align 1
    char[256] m_pszGameEndText; // offset 0x9A0, size 0x100, align 1
    int32[4] m_pnTextReplaceValuesCDotaQuest; // offset 0xAA0, size 0x10, align 4
    char[64] m_pszTextReplaceString; // offset 0xAB0, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0xAF0, size 0x4, align 4
    int32 m_nQuestCompleteFadeAlpha; // offset 0xAF4, size 0x4, align 4
    char[256] m_pszQuestName; // offset 0xAF8, size 0x100, align 1
};
