#pragma once

class CAI_AnimGraphServices : public CAI_Component /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    HandshakeInfo_t[2] m_pHandshakeInfo; // offset 0x50, size 0x30, align 8
    LastIncomingHit_t m_LastIncomingHit; // offset 0x80, size 0x20, align 255
};
