#pragma once

class CBaseCSGrenadeProjectile : public CBaseGrenade /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0xDA8, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0xDB4, size 0xC, align 4
    int32 m_nBounces; // offset 0xDC0, size 0x4, align 4
    char _pad_0DC4[0x4]; // offset 0xDC4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0xDC8, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0xDD0, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0xDD4, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0xDE0, size 0x4, align 255
    uint8 m_unOGSExtraFlags; // offset 0xDE4, size 0x1, align 1
    bool m_bDetonationRecorded; // offset 0xDE5, size 0x1, align 1
    uint16 m_nItemIndex; // offset 0xDE6, size 0x2, align 2
    VectorWS m_vecOriginalSpawnLocation; // offset 0xDE8, size 0xC, align 4
    GameTime_t m_flLastBounceSoundTime; // offset 0xDF4, size 0x4, align 255
    RotationVector m_vecGrenadeSpin; // offset 0xDF8, size 0xC, align 4
    Vector m_vecLastHitSurfaceNormal; // offset 0xE04, size 0xC, align 4
    int32 m_nTicksAtZeroVelocity; // offset 0xE10, size 0x4, align 4
    bool m_bHasEverHitEnemy; // offset 0xE14, size 0x1, align 1
    char _pad_0E15[0xB]; // offset 0xE15
};
