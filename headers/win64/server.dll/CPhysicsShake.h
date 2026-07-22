#pragma once

class CPhysicsShake  // sizeof 0x18, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Vector m_force; // offset 0x8, size 0xC, align 4
    char _pad_0014[0x4]; // offset 0x14
};
