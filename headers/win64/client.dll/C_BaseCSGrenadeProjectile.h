#pragma once

class C_BaseCSGrenadeProjectile : public C_BaseGrenade /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12B0]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x12B0, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0x12BC, size 0xC, align 4
    int32 m_nBounces; // offset 0x12C8, size 0x4, align 4
    char _pad_12CC[0x4]; // offset 0x12CC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0x12D0, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0x12D8, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0x12DC, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0x12E8, size 0x4, align 255
    Vector vecLastTrailLinePos; // offset 0x12EC, size 0xC, align 4
    GameTime_t flNextTrailLineTime; // offset 0x12F8, size 0x4, align 255
    bool m_bExplodeEffectBegan; // offset 0x12FC, size 0x1, align 1
    bool m_bCanCreateGrenadeTrail; // offset 0x12FD, size 0x1, align 1
    char _pad_12FE[0x2]; // offset 0x12FE
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // offset 0x1300, size 0x4, align 255
    char _pad_1304[0x4]; // offset 0x1304
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // offset 0x1308, size 0x8, align 8
    CUtlVector< Vector > m_arrTrajectoryTrailPoints; // offset 0x1310, size 0x18, align 8
    CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // offset 0x1328, size 0x18, align 8
    float32 m_flTrajectoryTrailEffectCreationTime; // offset 0x1340, size 0x4, align 4
    char _pad_1344[0x4]; // offset 0x1344
};
