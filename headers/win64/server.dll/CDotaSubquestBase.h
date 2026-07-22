#pragma once

class CDotaSubquestBase : public CBaseEntity /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    char[256] m_pszSubquestText; // offset 0x498, size 0x100, align 1
    bool m_bHidden; // offset 0x598, size 0x1, align 1
    bool m_bCompleted; // offset 0x599, size 0x1, align 1
    bool m_bShowProgressBar; // offset 0x59A, size 0x1, align 1
    char _pad_059B[0x1]; // offset 0x59B
    int32 m_nProgressBarHueShift; // offset 0x59C, size 0x4, align 4
    int32[2] m_pnTextReplaceValuesCDotaSubquestBase; // offset 0x5A0, size 0x8, align 4
    char[64] m_pszTextReplaceString; // offset 0x5A8, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x5E8, size 0x4, align 4
    char[256] m_pszSubquestName; // offset 0x5EC, size 0x100, align 1
    char _pad_06EC[0x4]; // offset 0x6EC
};
