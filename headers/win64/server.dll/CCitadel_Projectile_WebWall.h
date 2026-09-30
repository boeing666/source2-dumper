#pragma once

class CCitadel_Projectile_WebWall : public CCitadelProjectile /*0x0*/  // sizeof 0xDD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    bool bHasDetonatedOnTarget; // offset 0x968, size 0x1, align 1
    char _pad_0969[0x3]; // offset 0x969
    ParticleIndex_t m_nWebWallFxIndex; // offset 0x96C, size 0x4, align 255
    char _pad_0970[0x10]; // offset 0x970
    VectorWS m_vecCastPosition; // offset 0x980, size 0xC, align 4
    Vector m_vecCastPositionNormal; // offset 0x98C, size 0xC, align 4
    VectorWS m_vecEndPosition; // offset 0x998, size 0xC, align 4
    Vector m_vecEndPositionNormal; // offset 0x9A4, size 0xC, align 4
    char _pad_09B0[0x420]; // offset 0x9B0
};
