#pragma once

class C_DotaSubquestBase : public C_BaseEntity /*0x0*/  // sizeof 0x748, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    char[256] m_pszSubquestText; // offset 0x5F0, size 0x100, align 1
    bool m_bHidden; // offset 0x6F0, size 0x1, align 1
    bool m_bCompleted; // offset 0x6F1, size 0x1, align 1
    bool m_bShowProgressBar; // offset 0x6F2, size 0x1, align 1
    char _pad_06F3[0x1]; // offset 0x6F3
    int32 m_nProgressBarHueShift; // offset 0x6F4, size 0x4, align 4
    int32[2] m_pnTextReplaceValuesCDotaSubquestBase; // offset 0x6F8, size 0x8, align 4
    char[64] m_pszTextReplaceString; // offset 0x700, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x740, size 0x4, align 4
    bool m_bWasCompleted; // offset 0x744, size 0x1, align 1
    char _pad_0745[0x3]; // offset 0x745
};
