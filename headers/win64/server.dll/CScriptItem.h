#pragma once

class CScriptItem : public CItem /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    MoveType_t m_MoveTypeOverride; // offset 0xAE0, size 0x1, align 1 | MNotSaved
    char _pad_0AE1[0xF]; // offset 0xAE1
};
