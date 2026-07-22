#pragma once

class CCitadelBoomerangProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    bool m_bReturning; // offset 0xB60, size 0x1, align 1
    char _pad_0B61[0x7]; // offset 0xB61
};
