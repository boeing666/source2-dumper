#pragma once

class CMessageEntity : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_radius; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_messageText; // offset 0x790, size 0x8, align 8
    bool m_drawText; // offset 0x798, size 0x1, align 1
    bool m_bDeveloperOnly; // offset 0x799, size 0x1, align 1
    bool m_bEnabled; // offset 0x79A, size 0x1, align 1
    char _pad_079B[0x5]; // offset 0x79B
};
