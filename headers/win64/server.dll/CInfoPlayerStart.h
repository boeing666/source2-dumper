#pragma once

class CInfoPlayerStart : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bDisabled; // offset 0x4A8, size 0x1, align 1
    bool m_bIsMaster; // offset 0x4A9, size 0x1, align 1
    char _pad_04AA[0x6]; // offset 0x4AA
    CGlobalSymbol m_pPawnSubclass; // offset 0x4B0, size 0x8, align 8
};
