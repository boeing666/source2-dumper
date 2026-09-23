#pragma once

class CBaseCSGrenadeProjectile : public CBaseGrenade /*0x0*/  // sizeof 0xB40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0xAD0, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0xADC, size 0xC, align 4
    int32 m_nBounces; // offset 0xAE8, size 0x4, align 4
    char _pad_0AEC[0x4]; // offset 0xAEC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0xAF0, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0xAF8, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0xAFC, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0xB08, size 0x4, align 255
    uint8 m_unOGSExtraFlags; // offset 0xB0C, size 0x1, align 1
    bool m_bDetonationRecorded; // offset 0xB0D, size 0x1, align 1
    uint16 m_nItemIndex; // offset 0xB0E, size 0x2, align 2
    VectorWS m_vecOriginalSpawnLocation; // offset 0xB10, size 0xC, align 4
    GameTime_t m_flLastBounceSoundTime; // offset 0xB1C, size 0x4, align 255
    RotationVector m_vecGrenadeSpin; // offset 0xB20, size 0xC, align 4
    Vector m_vecLastHitSurfaceNormal; // offset 0xB2C, size 0xC, align 4
    int32 m_nTicksAtZeroVelocity; // offset 0xB38, size 0x4, align 4
    bool m_bHasEverHitEnemy; // offset 0xB3C, size 0x1, align 1
    char _pad_0B3D[0x3]; // offset 0xB3D
};
