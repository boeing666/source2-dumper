#pragma once

class C_BaseCSGrenadeProjectile : public C_BaseGrenade /*0x0*/  // sizeof 0x11E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1150]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x1150, size 0xC, align 4
    Vector m_vInitialVelocity; // offset 0x115C, size 0xC, align 4
    int32 m_nBounces; // offset 0x1168, size 0x4, align 4
    char _pad_116C[0x4]; // offset 0x116C
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // offset 0x1170, size 0x8, align 8
    int32 m_nExplodeEffectTickBegin; // offset 0x1178, size 0x4, align 4
    VectorWS m_vecExplodeEffectOrigin; // offset 0x117C, size 0xC, align 4
    GameTime_t m_flSpawnTime; // offset 0x1188, size 0x4, align 255
    Vector vecLastTrailLinePos; // offset 0x118C, size 0xC, align 4
    GameTime_t flNextTrailLineTime; // offset 0x1198, size 0x4, align 255
    bool m_bExplodeEffectBegan; // offset 0x119C, size 0x1, align 1
    bool m_bCanCreateGrenadeTrail; // offset 0x119D, size 0x1, align 1
    char _pad_119E[0x2]; // offset 0x119E
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // offset 0x11A0, size 0x4, align 255
    char _pad_11A4[0x4]; // offset 0x11A4
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // offset 0x11A8, size 0x8, align 8
    CUtlVector< Vector > m_arrTrajectoryTrailPoints; // offset 0x11B0, size 0x18, align 8
    CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // offset 0x11C8, size 0x18, align 8
    float32 m_flTrajectoryTrailEffectCreationTime; // offset 0x11E0, size 0x4, align 4
    char _pad_11E4[0x4]; // offset 0x11E4
};
