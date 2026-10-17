#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x910]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0x910, size 0x1, align 1 | MNotSaved
    char _pad_0911[0x7]; // offset 0x911
};
