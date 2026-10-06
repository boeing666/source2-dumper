#pragma once

class CGameModifier_SetMoveType : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    MoveType_t m_nMoveType; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x7]; // offset 0x149
};
