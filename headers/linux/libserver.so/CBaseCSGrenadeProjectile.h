#pragma once

class CBaseCSGrenadeProjectile : public CBaseGrenade /*0x0*/  // sizeof 0xD40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCC8]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0xCC8, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0xCD4, size 0xC, align 4
    int32 m_nBounces; // offset 0xCE0, size 0x4, align 4
    char _pad_0CE4[0x4]; // offset 0xCE4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0xCE8, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0xCF0, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0xCF4, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0xD00, size 0x4, align 255
    uint8 m_unOGSExtraFlags; // offset 0xD04, size 0x1, align 1
    bool m_bDetonationRecorded; // offset 0xD05, size 0x1, align 1
    uint16 m_nItemIndex; // offset 0xD06, size 0x2, align 2
    VectorWS m_vecOriginalSpawnLocation; // offset 0xD08, size 0xC, align 4
    GameTime_t m_flLastBounceSoundTime; // offset 0xD14, size 0x4, align 255
    RotationVector m_vecGrenadeSpin; // offset 0xD18, size 0xC, align 4
    Vector m_vecLastHitSurfaceNormal; // offset 0xD24, size 0xC, align 4
    int32 m_nTicksAtZeroVelocity; // offset 0xD30, size 0x4, align 4
    bool m_bHasEverHitEnemy; // offset 0xD34, size 0x1, align 1
    char _pad_0D35[0xB]; // offset 0xD35
};
