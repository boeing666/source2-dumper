#pragma once

class CAI_AnimGraphServices : public CAI_Component /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    HandshakeInfo_t[2] m_pHandshakeInfo; // offset 0x48, size 0x50, align 8
    LastIncomingHit_t m_LastIncomingHit; // offset 0x98, size 0x20, align 4
};
