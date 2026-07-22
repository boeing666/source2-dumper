#pragma once

class C_DOTACameraBounds : public C_BaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    Vector m_vecBoundsMin; // offset 0x76C, size 0xC, align 4
    Vector m_vecBoundsMax; // offset 0x778, size 0xC, align 4
    char _pad_0784[0x4]; // offset 0x784
};
