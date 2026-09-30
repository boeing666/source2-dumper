#pragma once

class CPhysTorque : public CPhysForce /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x510]; // offset 0x0
    Vector m_axis; // offset 0x510, size 0xC, align 4
    char _pad_051C[0x4]; // offset 0x51C
};
