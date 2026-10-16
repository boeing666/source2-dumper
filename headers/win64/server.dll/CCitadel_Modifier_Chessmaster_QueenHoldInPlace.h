#pragma once

class CCitadel_Modifier_Chessmaster_QueenHoldInPlace : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x3A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x150, size 0xC, align 4
    VectorWS m_vecQueenPosition; // offset 0x15C, size 0xC, align 4
    char _pad_0168[0x240]; // offset 0x168
};
