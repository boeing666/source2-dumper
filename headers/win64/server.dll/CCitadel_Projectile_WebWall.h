#pragma once

class CCitadel_Projectile_WebWall : public CCitadelProjectile /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    bool bHasDetonatedOnTarget; // offset 0x970, size 0x1, align 1
    char _pad_0971[0x3]; // offset 0x971
    ParticleIndex_t m_nWebWallFxIndex; // offset 0x974, size 0x4, align 255
    char _pad_0978[0x10]; // offset 0x978
    VectorWS m_vecCastPosition; // offset 0x988, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x994, size 0xC, align 4
    VectorWS m_vecEndPosition; // offset 0x9A0, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x9AC, size 0xC, align 4
    char _pad_09B8[0x420]; // offset 0x9B8
};
