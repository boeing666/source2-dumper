#pragma once

class CInfoPlayerStart : public CPointEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bDisabled; // offset 0x498, size 0x1, align 1
    bool m_bIsMaster; // offset 0x499, size 0x1, align 1
    char _pad_049A[0x6]; // offset 0x49A
    CGlobalSymbol m_pPawnSubclass; // offset 0x4A0, size 0x8, align 8
};
