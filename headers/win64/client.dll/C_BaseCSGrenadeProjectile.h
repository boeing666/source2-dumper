#pragma once

class C_BaseCSGrenadeProjectile : public C_BaseGrenade /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11C8]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x11C8, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0x11D4, size 0xC, align 4
    int32 m_nBounces; // offset 0x11E0, size 0x4, align 4
    char _pad_11E4[0x4]; // offset 0x11E4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0x11E8, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0x11F0, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0x11F4, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0x1200, size 0x4, align 255
    Vector vecLastTrailLinePos; // offset 0x1204, size 0xC, align 4
    GameTime_t flNextTrailLineTime; // offset 0x1210, size 0x4, align 255
    bool m_bExplodeEffectBegan; // offset 0x1214, size 0x1, align 1
    bool m_bCanCreateGrenadeTrail; // offset 0x1215, size 0x1, align 1
    char _pad_1216[0x2]; // offset 0x1216
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // offset 0x1218, size 0x4, align 255
    char _pad_121C[0x4]; // offset 0x121C
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // offset 0x1220, size 0x8, align 8
    CUtlVector< Vector > m_arrTrajectoryTrailPoints; // offset 0x1228, size 0x18, align 8
    CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // offset 0x1240, size 0x18, align 8
    float32 m_flTrajectoryTrailEffectCreationTime; // offset 0x1258, size 0x4, align 4
    char _pad_125C[0x4]; // offset 0x125C
};
