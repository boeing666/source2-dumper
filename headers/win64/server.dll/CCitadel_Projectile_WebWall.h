#pragma once

class CCitadel_Projectile_WebWall : public CCitadelProjectile /*0x0*/  // sizeof 0xBA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    bool bHasDetonatedOnTarget; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    ParticleIndex_t m_nWebWallFxIndex; // offset 0x864, size 0x4, align 255
    char _pad_0868[0x10]; // offset 0x868
    Vector m_vecCastPosition; // offset 0x878, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x884, size 0xC, align 4
    Vector m_vecEndPosition; // offset 0x890, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x89C, size 0xC, align 4
    char _pad_08A8[0x300]; // offset 0x8A8
};
