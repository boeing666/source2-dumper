#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0xA10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0xA00, size 0x1, align 1 | MNotSaved
    char _pad_0A01[0xF]; // offset 0xA01
};
