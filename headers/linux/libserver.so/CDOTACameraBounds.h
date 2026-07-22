#pragma once

class CDOTACameraBounds : public CBaseEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    Vector m_vecBoundsMin; // offset 0x778, size 0xC, align 4
    Vector m_vecBoundsMax; // offset 0x784, size 0xC, align 4
};
