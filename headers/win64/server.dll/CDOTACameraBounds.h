#pragma once

class CDOTACameraBounds : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    Vector m_vecBoundsMin; // offset 0x498, size 0xC, align 4
    Vector m_vecBoundsMax; // offset 0x4A4, size 0xC, align 4
};
