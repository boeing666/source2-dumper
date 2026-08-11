#pragma once

class CGameModifier_SetMoveType : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    MoveType_t m_nMoveType; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x7]; // offset 0xD1
};
