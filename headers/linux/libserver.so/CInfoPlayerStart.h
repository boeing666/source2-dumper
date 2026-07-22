#pragma once

class CInfoPlayerStart : public CPointEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    bool m_bIsMaster; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x6]; // offset 0x77A
    CGlobalSymbol m_pPawnSubclass; // offset 0x780, size 0x8, align 8
};
