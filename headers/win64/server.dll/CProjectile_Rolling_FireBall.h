#pragma once

class CProjectile_Rolling_FireBall : public CCitadelProjectile /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    bool m_bHitWorld; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    Vector m_vInitialDirection; // offset 0x864, size 0xC, align 4
};
