#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0xB40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0xB30, size 0x1, align 1 | MNotSaved
    char _pad_0B31[0xF]; // offset 0xB31
};
