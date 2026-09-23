#pragma once

class C_BaseCSGrenadeProjectile : public C_BaseGrenade /*0x0*/  // sizeof 0x12D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1238]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x1238, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0x1244, size 0xC, align 4
    int32 m_nBounces; // offset 0x1250, size 0x4, align 4
    char _pad_1254[0x4]; // offset 0x1254
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0x1258, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0x1260, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0x1264, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0x1270, size 0x4, align 255
    Vector vecLastTrailLinePos; // offset 0x1274, size 0xC, align 4
    GameTime_t flNextTrailLineTime; // offset 0x1280, size 0x4, align 255
    bool m_bExplodeEffectBegan; // offset 0x1284, size 0x1, align 1
    bool m_bCanCreateGrenadeTrail; // offset 0x1285, size 0x1, align 1
    char _pad_1286[0x2]; // offset 0x1286
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // offset 0x1288, size 0x4, align 255
    char _pad_128C[0x4]; // offset 0x128C
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // offset 0x1290, size 0x8, align 8
    CUtlVector< Vector > m_arrTrajectoryTrailPoints; // offset 0x1298, size 0x18, align 8
    CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // offset 0x12B0, size 0x18, align 8
    float32 m_flTrajectoryTrailEffectCreationTime; // offset 0x12C8, size 0x4, align 4
    char _pad_12CC[0x4]; // offset 0x12CC
};
