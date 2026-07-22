#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0x830, size 0x1, align 1 | MNotSaved
    char _pad_0831[0x7]; // offset 0x831
};
