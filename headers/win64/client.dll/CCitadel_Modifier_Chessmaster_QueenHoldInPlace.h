#pragma once

class CCitadel_Modifier_Chessmaster_QueenHoldInPlace : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x398, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x140, size 0xC, align 4
    VectorWS m_vecQueenPosition; // offset 0x14C, size 0xC, align 4
    char _pad_0158[0x240]; // offset 0x158
};
