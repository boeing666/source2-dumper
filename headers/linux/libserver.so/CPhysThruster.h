#pragma once

class CPhysThruster : public CPhysForce /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    Vector m_localOrigin; // offset 0x7E8, size 0xC, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
};
