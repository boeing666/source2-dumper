#pragma once

class CBaseCSGrenadeProjectile : public CBaseGrenade /*0x0*/  // sizeof 0xA60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x9F0, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0x9FC, size 0xC, align 4
    int32 m_nBounces; // offset 0xA08, size 0x4, align 4
    char _pad_0A0C[0x4]; // offset 0xA0C
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0xA10, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0xA18, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0xA1C, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0xA28, size 0x4, align 255
    uint8 m_unOGSExtraFlags; // offset 0xA2C, size 0x1, align 1
    bool m_bDetonationRecorded; // offset 0xA2D, size 0x1, align 1
    uint16 m_nItemIndex; // offset 0xA2E, size 0x2, align 2
    VectorWS m_vecOriginalSpawnLocation; // offset 0xA30, size 0xC, align 4
    GameTime_t m_flLastBounceSoundTime; // offset 0xA3C, size 0x4, align 255
    RotationVector m_vecGrenadeSpin; // offset 0xA40, size 0xC, align 4
    Vector m_vecLastHitSurfaceNormal; // offset 0xA4C, size 0xC, align 4
    int32 m_nTicksAtZeroVelocity; // offset 0xA58, size 0x4, align 4
    bool m_bHasEverHitEnemy; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
};
