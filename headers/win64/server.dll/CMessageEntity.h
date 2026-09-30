#pragma once

class CMessageEntity : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_radius; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_messageText; // offset 0x4B8, size 0x8, align 8
    bool m_drawText; // offset 0x4C0, size 0x1, align 1
    bool m_bDeveloperOnly; // offset 0x4C1, size 0x1, align 1
    bool m_bEnabled; // offset 0x4C2, size 0x1, align 1
    char _pad_04C3[0x5]; // offset 0x4C3
};
