#pragma once

class CGameModifier_SetMoveType : public CCitadelModifier /*0x0*/  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    MoveType_t m_nMoveType; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x7]; // offset 0x131
};
