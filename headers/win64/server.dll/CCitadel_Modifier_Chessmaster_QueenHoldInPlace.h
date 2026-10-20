#pragma once

class CCitadel_Modifier_Chessmaster_QueenHoldInPlace : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x3B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x158, size 0xC, align 4
    VectorWS m_vecQueenPosition; // offset 0x164, size 0xC, align 4
    char _pad_0170[0x240]; // offset 0x170
};
