#pragma once

class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0x2E50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB68]; // offset 0x0
    int32 m_nSmokeEffectTickBegin; // offset 0xB68, size 0x4, align 4
    bool m_bDidSmokeEffect; // offset 0xB6C, size 0x1, align 1
    char _pad_0B6D[0x3]; // offset 0xB6D
    int32 m_nRandomSeed; // offset 0xB70, size 0x4, align 4
    Vector m_vSmokeColor; // offset 0xB74, size 0xC, align 4
    VectorWS m_vSmokeDetonationPos; // offset 0xB80, size 0xC, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData; // offset 0xB90, size 0x18, align 8
    int32 m_nVoxelFrameDataSize; // offset 0xBA8, size 0x4, align 4
    int32 m_nVoxelUpdate; // offset 0xBAC, size 0x4, align 4
    uint8 m_nSmokeLightProbeRegen; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    GameTime_t m_flLastBounce; // offset 0xBB4, size 0x4, align 255
    GameTime_t m_fllastSimulationTime; // offset 0xBB8, size 0x4, align 255
    char _pad_0BBC[0x2284]; // offset 0xBBC
    bool m_bExplodeFromInferno; // offset 0x2E40, size 0x1, align 1
    bool m_bDidGroundScorch; // offset 0x2E41, size 0x1, align 1
    char _pad_2E42[0xE]; // offset 0x2E42
};
