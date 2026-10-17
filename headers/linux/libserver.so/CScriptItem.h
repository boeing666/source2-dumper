#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE8]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0xBE8, size 0x1, align 1 | MNotSaved
    char _pad_0BE9[0x7]; // offset 0xBE9
};
