#pragma once

class C_DotaSubquestBase : public C_BaseEntity /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    char[256] m_pszSubquestText; // offset 0x76C, size 0x100, align 1
    bool m_bHidden; // offset 0x86C, size 0x1, align 1
    bool m_bCompleted; // offset 0x86D, size 0x1, align 1
    bool m_bShowProgressBar; // offset 0x86E, size 0x1, align 1
    char _pad_086F[0x1]; // offset 0x86F
    int32 m_nProgressBarHueShift; // offset 0x870, size 0x4, align 4
    int32[2] m_pnTextReplaceValuesCDotaSubquestBase; // offset 0x874, size 0x8, align 4
    char[64] m_pszTextReplaceString; // offset 0x87C, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x8BC, size 0x4, align 4
    bool m_bWasCompleted; // offset 0x8C0, size 0x1, align 1
    char _pad_08C1[0x7]; // offset 0x8C1
};
