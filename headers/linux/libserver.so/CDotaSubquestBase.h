#pragma once

class CDotaSubquestBase : public CBaseEntity /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    char[256] m_pszSubquestText; // offset 0x778, size 0x100, align 1
    bool m_bHidden; // offset 0x878, size 0x1, align 1
    bool m_bCompleted; // offset 0x879, size 0x1, align 1
    bool m_bShowProgressBar; // offset 0x87A, size 0x1, align 1
    char _pad_087B[0x1]; // offset 0x87B
    int32 m_nProgressBarHueShift; // offset 0x87C, size 0x4, align 4
    int32[2] m_pnTextReplaceValuesCDotaSubquestBase; // offset 0x880, size 0x8, align 4
    char[64] m_pszTextReplaceString; // offset 0x888, size 0x40, align 1
    int32 m_nTextReplaceValueVersion; // offset 0x8C8, size 0x4, align 4
    char[256] m_pszSubquestName; // offset 0x8CC, size 0x100, align 1
    char _pad_09CC[0x4]; // offset 0x9CC
};
