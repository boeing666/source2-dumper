#pragma once

class CMessageEntity : public CPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int32 m_radius; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_messageText; // offset 0x4A8, size 0x8, align 8
    bool m_drawText; // offset 0x4B0, size 0x1, align 1
    bool m_bDeveloperOnly; // offset 0x4B1, size 0x1, align 1
    bool m_bEnabled; // offset 0x4B2, size 0x1, align 1
    char _pad_04B3[0x5]; // offset 0x4B3
};
