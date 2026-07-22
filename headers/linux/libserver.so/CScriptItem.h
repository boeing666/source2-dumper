#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0xCE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCD8]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0xCD8, size 0x1, align 1 | MNotSaved
    char _pad_0CD9[0x7]; // offset 0xCD9
};
