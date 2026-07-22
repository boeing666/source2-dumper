#pragma once

class CSingleplayRules : public CGameRules /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bSinglePlayerGameEnding; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x7]; // offset 0xD1
};
