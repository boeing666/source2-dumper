#pragma once

class CSingleplayRules : public CGameRules /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xC9]; // offset 0x0
    bool m_bSinglePlayerGameEnding; // offset 0xC9, size 0x1, align 1
    char _pad_00CA[0x6]; // offset 0xCA
};
